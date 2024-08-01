

vector<long long> printFib(int n) 
    {
        //code here
        vector<long long> v(n);
        v[0]=v[1]=1;
        for(int i=2; i<n; i++)
        v[i]= v[i-1]+v[i-2];
        return v;
    }