class Solution
{
    public:
    //Function to merge k sorted arrays.
    
     void merge(vector<int> &res, int start, int mid, int finish, vector<int> &ans){
        int start1 = start;

        int start2 = mid+1;
        int n1 = mid-start+1;
        int n2 = finish-mid;

        for(int i=0;i<n1;i++){
            ans[start1+i] = res[start1+i];
        }
        for(int i=0; i<n2;i++){
            ans[start2+i] = res[start2+i];

        }

        int i=0, j=0, k = start;
        while(i<n1 && j<n2){
            if(ans[start1+i]<= ans[start2 + j]){
                res[k] = ans[start1+i];
                i+=1;

            }
            else{
                res[k] = ans[start2+j];
                j+=1;

            }
            k+=1;

        }

        while(i<n1){
               res[k] = ans[start1+i];
               i++;
               k++;

        }
        while(j<n2){

        
               res[k] = ans[start2+ j];
               j++;
               k++;

        }

    };
    void mergesort(vector<int> &res, int start, int finish, vector<int> &ans){
        
        if(start>=finish){
            return;
        }

            int mid = (start+finish)/2;
            mergesort(res, start, mid, ans);
            mergesort(res, mid+1, finish, ans);
            merge(res, start,mid,  finish, ans);

        
    };

    vector<int> mergeKArrays(vector<vector<int>> lists, int K) {
        
        vector<int> res;
        
        for (auto curr : lists) {
            for(auto h : curr){
                
                res.push_back(h);
            }
                

        }
        vector<int> ans(res.size());
        int finish = res.size();
        int start = 0;
        mergesort(res, 0, finish-1, ans);

        return res;



    }
};