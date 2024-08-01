Frequencies of Limited Range Array Elements

class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        map<int , int> res;
        
        for(int i=0; i<N; i++){
            
            res[arr[i]]++;
            
        }
        
        for(int i=1; i<=N; i++){
            
            if(res.find(i)== res.end()) arr[i-1] = 0;
            else {
                
                arr[i-1] = res[i];
            }
            
        }
        
        
        
    }
};
