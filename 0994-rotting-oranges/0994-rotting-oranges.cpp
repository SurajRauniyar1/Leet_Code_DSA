class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int rows = grid.size();
        int cols = grid[0].size();

        queue<pair<int, int>> q;

        int fresh = 0;

        
        for(int r = 0; r < rows; r++) {

            for(int c = 0; c < cols; c++) {

                if(grid[r][c] == 2) {
                    q.push({r, c});
                }

                else if(grid[r][c] == 1) {
                    fresh++;
                }
            }
        }

        int minutes = 0;

        // 2. BFS
        while(!q.empty() && fresh > 0) {

            int size = q.size();

            // Process all oranges from current minute
            for(int i = 0; i < size; i++) {

                int r = q.front().first;
                int c = q.front().second;

                q.pop();

                // UP
                if(r - 1 >= 0 && grid[r - 1][c] == 1) {
                    grid[r - 1][c] = 2;
                    fresh--;
                    q.push({r - 1, c});
                }

                // DOWN
                if(r + 1 < rows && grid[r + 1][c] == 1) {
                    grid[r + 1][c] = 2;
                    fresh--;
                    q.push({r + 1, c});
                }

                // LEFT
                if(c - 1 >= 0 && grid[r][c - 1] == 1) {
                    grid[r][c - 1] = 2;
                    fresh--;
                    q.push({r, c - 1});
                }

                // RIGHT
                if(c + 1 < cols && grid[r][c + 1] == 1) {
                    grid[r][c + 1] = 2;
                    fresh--;
                    q.push({r, c + 1});
                }
            }

            minutes++;
        }

        // 3. If fresh oranges remain, impossible
        if(fresh > 0) {
            return -1;
        }

        return minutes;
    }
};