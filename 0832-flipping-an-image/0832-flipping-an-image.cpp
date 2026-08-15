class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int rows=image.size();
        int cols=image[0].size();
        for(int i=0;i<rows;i++){
            reverse(image[i].begin(),image[i].end());
            for(int j=0;j<cols;j++){
                if(image[i][j]==1) image[i][j]=0;
                else image[i][j]=1;
            }
        }
        return image;
    }
};