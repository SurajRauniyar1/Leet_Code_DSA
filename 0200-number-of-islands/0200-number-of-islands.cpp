class Solution {
public:
    void dfs(vector<vector<char>>& grid, int r, int c) {

        // outside grid
        if(r < 0 || r >= grid.size() ||
           c < 0 || c >= grid[0].size()) {
            return;
        }

        // water or already visited
        if(grid[r][c] == '0') {
            return;
        }

        // mark visited
        grid[r][c] = '0';

        // up
        dfs(grid, r - 1, c);

        // down
        dfs(grid, r + 1, c);

        // left
        dfs(grid, r, c - 1);

        // right
        dfs(grid, r, c + 1);
    }

    int numIslands(vector<vector<char>>& grid) {

        int count = 0;

        for(int r = 0; r < grid.size(); r++) {
            for(int c = 0; c < grid[0].size(); c++) {

                if(grid[r][c] == '1') {

                    count++;

                    dfs(grid, r, c);
                }
            }
        }

        return count;
    }
};