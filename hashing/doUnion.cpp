// normal code by using set ...

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        
        // we will take smaller array in  larger array
        // only count has to be return 
        set<int> s;
        int i=0;
        for(i=0; i<n; i++){
            s.insert(a[i]);
        }
        for(i=0;i<m; i++){
            s.insert(b[i]);
        }
        return s.size();
    }
};


// by using hashing  - unordered_set / unordered_map ;


