lass Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here
        int row = 0;
        
        for(int i=0; i<n; i++){
            if(matrix[i][0] == x) return true;
            else if(matrix[i][0] > x ){
                row = i-1;
                break;
                
            }
            else{
                row = i;
   
            }
        }
        for(int i=0; i<m; i++){
            if(matrix[row][i] == x) return true;
        }
        return false;
        return false;
        
    }
};
