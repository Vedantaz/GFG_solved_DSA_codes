class Solution{
  public:
    int isdivisible7(string num){
        //complete the function here
        
        int carry=0;
        for(char c:num){
            int digit = c-'0';
            int number = carry*10+digit;
            carry = number%7;
            
        }
        return carry==0;
    }
};
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