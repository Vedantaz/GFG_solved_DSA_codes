class Solution{
  public:
        string key="0#0";
          //this is because even if first time this key
          //occured means no of 0 1 2 are equal unlike
          //other keys.
          mp[key]=1; 
          int a=0,b=0,c=0;
          int cnt=0;
          for(int i=0;i<str.length();i++)
          {
              if(str[i]=='0') a++;
              else if(str[i]=='1') b++;
              else if(str[i]=='2') c++;
              string key=to_string(b-a)+"#"+to_string(c-b);
              if(mp.find(key)!=mp.end())
                 cnt+=mp[key];
               mp[key]++;
          }
          return cnt;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.isdivisible7(s)<<"\n";

    }
    return 0;
}