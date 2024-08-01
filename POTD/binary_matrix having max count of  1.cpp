class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int n) {
        //code here
        
        vector<int> res;
        int j = n-1;
	    
	    int row = 0;
	    for(int i=0; i<n;i++){
	        while(j>=0 && mat[i][j] == 1){
	            j--;
	            row = i;
	            
	        }
	    }
	    
        res.push_back(row);
        res.push_back(n-j-1);
        return res;
    }
};