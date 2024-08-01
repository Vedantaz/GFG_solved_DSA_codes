3 9
0 0 0 1 1 1 1 1 1 0 0 0 0 1 1 1 1 1 0 0 0 0 1 1 1 1 1

op == 0

4 4
0 1 1 1 0 0 1 1 1 1 1 1 0 0 0 0

op == 2
 

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int j = m-1;
	    
	    int row = 0;
	    for(int i=0; i<n;i++){
	        while(j>=0 && arr[i][j] == 1){
	            j--;
	            row = i;
	            
	        }
	    }
	    return j == m-1 ? -1 : row;
	    
	}

};
