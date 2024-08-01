class Solution
{
  public:
    string arrangeString(string str)
    {
        //code here.
        sort(str.begin(),str.end());
        string ans="";
        int sum=0;
        if(str.length()==1)
        {
            ans+=str[0];
            return ans;
        }
        else
        {
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                ans+=str[i];
            }
            else if(str[i] >= '0' && str[i] <= '9')
            {
                int temp = str[i] - '0';
                sum += temp;
            }
        }}
        ans+=to_string(sum);
        return ans;
        
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.arranegString(s)<<"\n";

    }
    return 0;
}