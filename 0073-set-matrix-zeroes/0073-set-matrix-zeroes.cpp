class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool firstrow = false;
        bool firstcol = false;
        int rows=matrix.size();
        int cols=matrix[0].size();
        
        //firstrow
        for(int j=0;j<cols;j++){
            if(matrix[0][j]==0){
                firstrow=true;
            }
        }
        //firstcols
        for(int i=0;i<rows;i++){
            if(matrix[i][0]==0){
                firstcol=true;
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
          // Set marked rows to zero
        for(int i = 1; i < rows; i++) {
            if(matrix[i][0] == 0) {
                for(int j = 1; j < cols; j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Set marked columns to zero
        for(int j = 1; j < cols; j++) {
            if(matrix[0][j] == 0) {
                for(int i = 1; i < rows; i++) {
                    matrix[i][j] = 0;
                }
            }
        }
        if(firstrow){
            for(int j=0;j<cols;j++){
                matrix[0][j]=0;
            }
        }
        if(firstcol){
            for(int i=0;i<rows;i++){
                matrix[i][0]=0;
            }
        }
    }
};