priority_queue<int,vector<int>,greater<int>>pq;
        vector<int>v;
        for(int i=0; i<n; i++){
            pq.push(arr[i]);
            if(pq.size()==k){
                v.push_back(pq.top());
            }
            else if(pq.size()>k){
                pq.pop();
                v.push_back(pq.top());
            }
            else {
                v.push_back(-1);
            }
        }
        return v;