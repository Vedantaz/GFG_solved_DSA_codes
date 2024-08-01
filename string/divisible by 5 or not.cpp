string isDivisibleBy5(string bin){
    //complete the function here
    long long int n=bin.size();
    long long int rem=0;
    
    for(int i=0;i<n;i++){
        if(bin[i]=='0'){
            rem=(rem*2)%5;
        }
        else{
            rem=(rem*2 + 1)%5;
        }
    }
    
    if(rem==0){
        return "Yes";
    }
    else{
        return "No";
    }
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