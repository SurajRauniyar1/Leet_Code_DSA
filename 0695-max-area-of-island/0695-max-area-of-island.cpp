class Solution {
    int maxCount=0,count=0;
public:
    void dfs(vector<vector<int>>&grid,int r,int c){
      
        if(r<0 || r>=grid.size()||
            c<0 || c>=grid[0].size()) return;
        if(grid[r][c]==0){
            return;
        }
        count++;
        grid[r][c]=0;
     
        dfs(grid,r-1,c);
        dfs(grid,r+1,c);
        dfs(grid,r,c-1);
        dfs(grid,r,c+1);

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for(int r=0;r<grid.size();r++){
            for(int c=0;c<grid[0].size();c++){
                if(grid[r][c]==1){
                    count=0;
                    dfs(grid,r,c);
                    maxCount=max(maxCount,count);
                }
            }

        }
        return maxCount;
    }
};