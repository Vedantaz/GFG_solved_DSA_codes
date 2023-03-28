
// unsuccessful code but self code
void bSearch(int arr[], int start, int finish, int mid, unordered_map<int, int> &res){
        
        int maxe =0;
        maxe =abs(arr[finish]-arr[start]);
        if(start == mid && finish == mid) return ;
        res[maxe] = (finish-start);
        
        bSearch(arr, start+1, finish-1, mid, res);
        
        
        
    }
    int maxIndexDiff(int arr[], int n) {
        // code here
        unordered_map<int, int> res;
        int finish = n-1, start=0;
        int mid = (finish-start)/2;
        
        bSearch(arr, 0 , n-1, mid , res);
        
        int maxVal=0, maxFreq =0, maxe=0;;
        for(auto x: res){
            int val = x.first;
            int freq = x.second;
            if( maxVal < val && maxFreq < freq) maxe = freq;
            
        }
        return maxe;
    }


