// Blm sempet diintegrasiin ke dstar_planner
// Algoritma yg di dstar planner masih pake Djikstra krn kita masih coba static aja
// Blm sempet ditest juga apakah benar efektif ini.
// Baru coba dengan asumsi untuk satu korban static.

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <set>
#include <tuple>
#include <cmath>
#include <limits>
#include <algorithm>
using namespace std;

const double INF = 1e9; 

int n, m;
vector<vector<char>> grid; // the current map (each cell is a token)

vector<vector<double>> g;    // cost-to-come (for each cell)
vector<vector<double>> rhs;  // one-step lookahead values

double km = 0;  // used by D* Lite to track changes
// The “start” in D* Lite is the current drone position; the “goal” is the target.
pair<int,int> startPos, goalPos;
// The homebase (remains constant) and victim position (remains constant until rescued)
pair<int,int> homebase, victim;
bool victimRescued = false;
// lastStart is used to update km when the drone moves.
pair<int,int> lastStart;

// We use a std::set to act as our priority queue. Each element is a tuple:
// (key1, key2, x, y). Keys are computed using g, rhs, the heuristic and km.
set< tuple<double, double, int, int> > openSet;

// Movements: only up, down, left, right allowed.
int dx[4] = {-1, 1,  0, 0};
int dy[4] = { 0, 0, -1, 1};

// Manhattan heuristic between two cells.
double heuristic(const pair<int,int>& a, const pair<int,int>& b) {
    return abs(a.first - b.first) + abs(a.second - b.second);
}

// Calculate the D* Lite key for cell (x,y) given the current startPos.
tuple<double,double,int,int> calcKey(int x, int y) {
    double k1 = min(g[x][y], rhs[x][y]) + heuristic(startPos, {x,y}) + km;
    double k2 = min(g[x][y], rhs[x][y]);
    return make_tuple(k1, k2, x, y);
}

// Helper function to check whether (x,y) is within grid bounds.
bool inBounds(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m);
}

// Returns whether the grid cell at (x,y) is an obstacle.
// (Any cell not marked "o" is considered traversable.)
bool isObstacle(int x, int y) {
    return grid[x][y] == "o";
}

// Since our openSet is keyed by (k1,k2,x,y) we need a helper to remove any element 
// (if present) corresponding to (x,y).
void removeFromQueue(int x, int y) {
    for(auto it = openSet.begin(); it != openSet.end(); ) {
        auto [k1, k2, ix, iy] = *it;
        if(ix == x && iy == y)
            it = openSet.erase(it);
        else
            ++it;
    }
}

// updateVertex: update the cost and key for cell (x,y) in the D* Lite search.
void updateVertex(int x, int y) {
    if(make_pair(x,y) != goalPos) {
        rhs[x][y] = INF;
        // For each neighbor (allowed moves) update rhs as the minimum cost path from (x,y)
        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if(inBounds(nx, ny) && !isObstacle(nx, ny))
                rhs[x][y] = min(rhs[x][y], 1 + g[nx][ny]);
        }
    }
    removeFromQueue(x, y);
    if(fabs(g[x][y] - rhs[x][y]) > 1e-6) { // if not “consistent”
        openSet.insert(calcKey(x, y));
    }
}

// The core D* Lite routine to compute (or repair) the shortest path.
vector<vector<char>> computeShortestPath() {
    while(!openSet.empty()) {
        auto top = *openSet.begin();
        double k1_top, k2_top;
        int ux, uy;
        tie(k1_top, k2_top, ux, uy) = top;
        // Compare top key with the key for the current start.
        auto keyStart = calcKey(startPos.first, startPos.second);
        double k1_start, k2_start;
        tie(k1_start, k2_start, ignore, ignore) = keyStart;
        
        // Continue while the smallest key is less than that for start OR start is not consistent.
        if( ((k1_top < k1_start) || (fabs(k1_top - k1_start) < 1e-6 && k2_top < k2_start))
            || (fabs(rhs[startPos.first][startPos.second] - g[startPos.first][startPos.second]) > 1e-6) ) {
            
            openSet.erase(openSet.begin());
            auto key_u = calcKey(ux, uy);
            double k1_u, k2_u;
            tie(k1_u, k2_u, ignore, ignore) = key_u;
            // If the key in the openSet is out-of-date, reinsert the cell with an updated key.
            if((k1_top < k1_u) || (fabs(k1_top - k1_u) < 1e-6 && k2_top < k2_u)) {
                openSet.insert(key_u);
            }
            // If the cell is “overconsistent”, set its cost to the rhs value and update its neighbors.
            else if(g[ux][uy] > rhs[ux][uy]) {
                g[ux][uy] = rhs[ux][uy];
                for(int i = 0; i < 4; i++) {
                    int vx = ux + dx[i], vy = uy + dy[i];
                    if(inBounds(vx, vy) && !isObstacle(vx, vy))
                        updateVertex(vx, vy);
                }
            }
            // Otherwise, make the cell “underconsistent” and update.
            else {
                g[ux][uy] = INF;
                updateVertex(ux, uy);
                for(int i = 0; i < 4; i++) {
                    int vx = ux + dx[i], vy = uy + dy[i];
                    if(inBounds(vx, vy) && !isObstacle(vx, vy))
                        updateVertex(vx, vy);
                }
            }
        } else {
            break;
        }
    }
}

// Given the current start position, choose the neighbor (up/down/left/right)
// that minimizes (1 + g(neighbor)); that cell is the next move.
pair<int,int> getNextMove() {
    double minCost = INF;
    pair<int,int> next = startPos;
    for(int i = 0; i < 4; i++) {
        int nx = startPos.first + dx[i], ny = startPos.second + dy[i];
        if(inBounds(nx, ny) && !isObstacle(nx, ny)) {
            double cost = 1 + g[nx][ny];
            if(cost < minCost) {
                minCost = cost;
                next = {nx, ny};
            }
        }
    }
    return next;
}

// The main algorithm: initialize D* Lite arrays, find the drone’s starting position,
// 1. Identify the drone’s starting position, homebase, and victim.
vector<vector<char>> main_algorithm(vector<vector<char>> grid) {
    // Initialize the D* Lite arrays.
    g.assign(n, vector<double>(m, INF));
    rhs.assign(n, vector<double>(m, INF));
    
    // Identify the drone’s starting position, homebase, and victim.
    // The drone is marked with "d". If not found, we assume it starts at homebase "s".
    bool droneFound = false;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(grid[i][j] == "d") {
                startPos = {i, j};
                droneFound = true;
            }
            if(grid[i][j] == "s")
                homebase = {i, j};
            if(grid[i][j] == "k")
                victim = {i, j};
        }
    }
    if(!droneFound) {
        startPos = homebase;
        grid[startPos.first][startPos.second] = "d";
    }
    
    // Initially the target is the victim (if present).
    goalPos = victim;
    victimRescued = false;
    
    // For D* Lite, initialize the goal’s rhs to 0.
    rhs[goalPos.first][goalPos.second] = 0;
    openSet.insert(calcKey(goalPos.first, goalPos.second));
    
    lastStart = startPos;
    
    int stepCount = 0;     // counts the drone’s moves (for trace numbering)

    // The simulation stops when the drone (carrying the rescued victim) returns to homebase.
    while(true) {
        // Update obstacles from new input if available.
        // For each “second” a new grid is provided.
        if(true){ // Logic should be replaced by subscriber.
            vector<vector<string>> newGrid(n, vector<string>(m));
            bool newInput = true;
            newGrid = grid; // Should be from the subscriber, but for now assume it's the same.
            if(newInput) {
                // Compare newGrid to our current grid: only obstacles ("o") may change.
                for (int i = 0; i < n; i++){
                    for (int j = 0; j < m; j++){
                        bool wasObs = (grid[i][j] == "o");
                        bool isObs = (newGrid[i][j] == "o");
                        if(wasObs != isObs) {
                            // An obstacle has been added or removed.
                            grid[i][j] = newGrid[i][j];
                            // Update (i,j) and its neighbors in our planning.
                            updateVertex(i, j);
                            for (int k = 0; k < 4; k++){
                                int ni = i + dx[k], nj = j + dy[k];
                                if(inBounds(ni, nj))
                                    updateVertex(ni, nj);
                            }
                        }
                        // (Other tokens such as trace numbers or "d" are kept as our simulation state.)
                    }
                }
            }
        }
        
        // Replan the path (repair only if needed) using D* Lite.
        computeShortestPath();
        
        // Choose the next move along the computed path.
        pair<int,int> nextPos = getNextMove();
        // (If nextPos == startPos then either we have reached the goal or no valid move—
        //  the problem guarantees a path exists.)
        
        // Before moving, update the trace: mark the current cell (except if it's the homebase "s")
        stepCount++;
        if(startPos != homebase)
            grid[startPos.first][startPos.second] = to_string(stepCount);
        else
            grid[startPos.first][startPos.second] = "s";
        
        // Update km (for D* Lite) and move the drone.
        km += heuristic(lastStart, startPos);
        lastStart = startPos;
        startPos = nextPos;
        
        // If the drone reaches the victim (and hasn’t yet rescued it), then mark victim as rescued.
        if(!victimRescued && startPos == victim) {
            victimRescued = true;
            // Change mission: now the target becomes the homebase.
            goalPos = homebase;
            // Reset the D* Lite arrays for the new goal.
            rhs[goalPos.first][goalPos.second] = 0;
            g[goalPos.first][goalPos.second] = INF;
            openSet.clear();
            openSet.insert(calcKey(goalPos.first, goalPos.second));
        }
        
        // Mark the new drone position with "d".
        grid[startPos.first][startPos.second] = "d";        
        
        // Check if mission complete: victim rescued and drone returned home.
        if(victimRescued && startPos == homebase)
            break;
    }
    
    return grid;
}
