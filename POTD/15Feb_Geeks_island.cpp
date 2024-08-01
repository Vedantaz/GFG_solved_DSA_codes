class Solution{   
public:
   
    // Write your code here.
    int n,m;
    
    vector<vector<int>> lab;
    
    void dfs(int i,int j,vector<vector<int>> &mat,int prevval,int label)
    {
        if(i<0 || j<0 || i>=n || j>=m || lab[i][j]&label)//if the current(i,j) is already visited so it will give label as outputnon doing and operation with the the value of the index which can act as sign of already visited current place with the given label to stop;
            return;
        
        int currentval=mat[i][j];
        
        if(currentval>=prevval)//we are going from shore to inside the land mass so we will check if the current point on which we are standing has been achieved by us from a lesser previous point
        {
            lab[i][j]=lab[i][j]|label;
            
            dfs(i+1,j,mat,currentval,label);
            dfs(i-1,j,mat,currentval,label);
            dfs(i,j-1,mat,currentval,label);
            dfs(i,j+1,mat,currentval,label);
            
        }
        
    }
    
    int water_flow(vector<vector<int>> &mat,int N,int M)
    {
    // Write your code here.
        n=N;
        m=M;
        
        int count=0;
        
        lab.resize(n,vector<int>(m,0));
        
        //label:1 for arabian sea (left and top)
        //label:2 for indian ocean (right and bottom)
        //label:3 for both arabian and indian ocean(both the oceans can be visited using this index(i,j))
        
        for(int i=0;i<n;i++)
        {
            dfs(i,0,mat,mat[i][0],1);
            dfs(i,M-1,mat,mat[i][M-1],2);
        }
        
        for(int j=0;j<m;j++)
        {
            dfs(0,j,mat,mat[0][j],1);
            dfs(N-1,j,mat,mat[N-1][j],2);
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(lab[i][j]==3)
                {
                    count++;
                }
            }
        }
        
        return count;
    }
    
};