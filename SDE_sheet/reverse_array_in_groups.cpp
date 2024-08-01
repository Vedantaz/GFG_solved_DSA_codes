// 5 77
// 35 56 48 21 87
// 5 3
// 1 2 3 4 5

#include <stack>
class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int i=0;

        while(i<n) {
            int e = min(i+k, n);
            reverse(arr.begin() + i, arr.begin() + e);
            i = i+k;
        }
        
    }
};