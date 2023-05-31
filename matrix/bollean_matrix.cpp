class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        //  all the cell respective to the 1 number of cell is will become 1;
        int row = matrix.size();
        int col = matrix[0].size();
        
        bool arr_row[row] ; fill(arr_row , arr_row+row, false);
        bool arr_col[col] ; fill(arr_col , arr_col+col, false);
        
        
        for(int i=0;i<row;i++ ){
            for(int j=0; j<col; j++){
                
                if(matrix[i][j] == 1){
                    arr_row[i] = true;
                    arr_col[j] = true;
                }
            }
                
        }
    
        for(int i=0; i<row;i++){
            if(arr_row[i]) {
                for(int j=0; j<col; j++){
                    matrix[i][j] = 1;
                    
                }
            }

        } 
        for(int i=0; i<col;i++){
            if(arr_col[i]) {
                for(int j=0; j<row; j++){
                    matrix[j][i] = 1;
                    
                }
            }

        }
    
        
        
    }
};