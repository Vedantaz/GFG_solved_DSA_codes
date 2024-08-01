
// tried and incorrect code of mine own ..

// class Solution {
//   public:
//     void reverse(string& str, int n)
//     {
       
//         for (int i = 0; i < n / 2; i++)
//             swap(str[i], str[n - i - 1]);
        
//     }
//     void operate(string &s, int n, unordered_map<string, int> &res){
//         for(int i=0; i<s.length();i++){
//             if(res[s[i]] != res.end()){
                
//                 // remove the first character and reverser the string 
//                 s.replace(s[0], "");
//                 reverse(s,n-1);
//                 operate(s,n-1);
                
//             }
//         }
//     }
//     string removeReverse(string s) {
//         // code here
        
//         unordered_map<string, int> res;
//         for(int i=0; i<s.length();i++){
//             res[s[i]]++;
            
//         }
//         opearte(s,n, res);
        
        
//         return s;
//     }
// }; 

class Solution {
  public:
    string removeReverse(string S) {
        // code here
        
        int n=S.size();
        unordered_map<char,int>freq;
        for(int i=0;i<n;i++)
        {
            freq[S[i]]++;
        }
        int start=0;
        int end=n-1;
        
        int dir=0;
        
        while(start<=end)
        {
            if(dir==0)
            {
                if(freq[S[start]]==1)
                {
                    start++;
                }
                else
                {
                    freq[S[start]]--;
                    S[start]='@';
                    start++;
                    dir=1;
                }
                
            }
            else
            {
                if(freq[S[end]]==1)
                {
                    end--;
                }
                else
                {
                    freq[S[end]]--;
                    S[end]='@';
                    end--;
                    dir=0;
                }
            }
        }
        
        string ans;
        for(int i=0;i<n; i++)
        {
            if(S[i]!='@')
            {
                ans.push_back(S[i]);
            }
        }
        
        if(dir==1)
        {
            reverse(ans.begin(),ans.end());
        }
        return ans;
    }
};