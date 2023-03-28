
https://practice.geeksforgeeks.org/explore?page=1&category[]=Algorithms&category[]=Sorting&difficulty[]=-1&sortBy=submissions

class Solution{
    public:
    int md = 1e9 + 7;
    int Maximize(int a[],int n)
    {
        // Complete the function
        long long  int res=0;
        sort(a, a+n);
        long long int i=0;
        while(i<n){
            
            res += (a[i]*i)%md;
            i++;
        }
        return res%md;
    }
}
 