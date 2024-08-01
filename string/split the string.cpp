class Solution{
public:
    int isPossible(string S){
    int n=S.size();
        unordered_set<string>st;
        string s="";
        for(int i=0;i<n;i++)
        {
           s+=S[i];
           if(st.find(s)==st.end())
           {
               st.insert(s);
               s="";
           }
           if(st.size()>=4)
               return 1;
        }
        return 0;
}
};

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.isPossible(s)<<"\n";

    }
    return 0;
}