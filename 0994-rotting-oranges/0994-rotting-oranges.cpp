class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int r = grid.size();
        int c = grid[0].size();

        queue<pair<int, int>> q;

        int fresh = 0;
        int minutes = 0;

        // Put all rotten oranges in queue
        // and count fresh oranges
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {

                if(grid[i][j] == 1) {
                    fresh++;
                }

                if(grid[i][j] == 2) {
                    q.push({i, j});
                }
            }
        }

        // BFS
        while(!q.empty() && fresh > 0) {

            // Number of rotten oranges
            // at the beginning of this minute
            int size = q.size();

            for(int i = 0; i < size; i++) {

                int row = q.front().first;
                int col = q.front().second;

                q.pop();

                // UP
                if(row - 1 >= 0 &&
                   grid[row - 1][col] == 1) {

                    grid[row - 1][col] = 2;
                    fresh--;
                    q.push({row - 1, col});
                }

                // DOWN
                if(row + 1 < r &&
                   grid[row + 1][col] == 1) {

                    grid[row + 1][col] = 2;
                    fresh--;
                    q.push({row + 1, col});
                }

                // LEFT
                if(col - 1 >= 0 &&
                   grid[row][col - 1] == 1) {

                    grid[row][col - 1] = 2;
                    fresh--;
                    q.push({row, col - 1});
                }

                // RIGHT
                if(col + 1 < c &&
                   grid[row][col + 1] == 1) {

                    grid[row][col + 1] = 2;
                    fresh--;
                    q.push({row, col + 1});
                }
            }

            // One complete BFS level = one minute
            minutes++;
        }

        // Fresh oranges still remaining
        if(fresh > 0) {
            return -1;
        }

        return minutes;
    }
};