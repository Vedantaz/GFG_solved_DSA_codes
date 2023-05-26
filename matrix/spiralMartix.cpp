https://practice.geeksforgeeks.org/problems/cd61add036272faa69c6814e34aa7007d5a25aa6/1
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
// User function template for C++
class Solution
{
    public:
    //Function to return the length of the longest common subsequence.
    int LCS(string s1, string s2, int m, int n)
    {
        // Your code here
        int dp[m+1][n+1];
        int ans = 0;
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 || j==0)
                dp[i][j] = 0;
                else if(s1[i-1]==s2[j-1])
                dp[i][j] = dp[i-1][j-1]+1;
                else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                ans = max(ans,dp[i][j]);
                }
                }
                return ans;
                }
                };
                // { Driver Code Starts.
                int main()
                {
                    int t;
                    cin>>t;
                    while(t--)
                    {
                        string s1,s2;
                        int m,n;
                        cin>>s1>>s2>>m>>n;
                        Solution ob;
                        cout<<ob.LCS(s1,s2,m,n)<<endl;
                        }
                        return 0;
                        }
                        // } Driver Code Ends
                        // Time Complexity: O(m*n)
                        // Auxiliary Space: O(m*n)
                        // Space Complexity: O(m*n)
                        // m - length of first string

                            




