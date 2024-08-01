#include <iostream>
using namespace std;


// using vector v , we store element in reverse direction in vector array and print in by popping the element accordingly
// tc = O(n) , sc = O(n)
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> v;
        int element=a[n-1];
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>=element)
            {
                v.push_back(a[i]);
                element=a[i];
            }
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};


int main(){
    
    return 0;
}