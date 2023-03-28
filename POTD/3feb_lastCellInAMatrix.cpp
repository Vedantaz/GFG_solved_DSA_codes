class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){
        //code here
        
        int i=0, j=0;
        int dir = 2;
        int n = matrix.size();
        int m = matrix[0].size();
        int ai=0, aj=0;
        
        while(i>= 0 && j>= 0 and i<n && j<m){
            ai = i; 
            aj = j;
            
            if(matrix[i][j] == 0){
                if(dir == 0) j--;
                
                if(dir == 1) i--;
                
                if(dir == 2) j++;
                
                if(dir == 3) i++;
                
                
                
            }
            else{
                matrix[i][j] = 0;
                if(dir == 0) dir = 1;
                
                else if(dir == 1) dir = 2;
                
                else if(dir == 2) dir = 3;
                else dir = 0;
            }
            
            
        }
        return {ai,aj} ;
        
    }
};