// 1 5 2 
// 2 6 3

// 1 2 3
// 4 4 6

// 9
// 1 3 1 4 5 1 2 1 2
// 5 10 2 7 9 3 3 2 5


// https://practice.geeksforgeeks.org/problems/af49b143a4ead583e943ca6176fbd7ea55b121ae/1

start again with a good  material mind after clg

 int minLaptops(int N, int start[], int end[]) {

       vector<pair<int,int>>v(N);
    //    vector<pair<int, int>>v(N);

       for(int i=0;i<N;i++){

           v[i]={start[i],end[i]};

       }
    // vector mein pair of start and end dale
        sort(v.begin(),v.end());
        priority_queue<int,vector<int>,greater<int>>pq;
    // priority_queue<int, vector<int>, greater<int>> pq;
        int cnt=0;
        for(int i=0;i<N;i++){

            if(pq.size()==0)

             { pq.push(v[i].second);

               cnt++; 

             }  

            else if(pq.top()<=v[i].first)

             {

               pq.push(v[i].second);

               pq.pop();

             }

            else{

                cnt++;

                pq.push(v[i].second);

            }

        }

     return cnt;
    }


    // my solutions :
        sort(start,start+n);

        sort(end,end+n);

        int laptopCount=1, i=1, j=0;

        while(i<n && j<n){

            if(start[i]<end[j]) laptopCount++;

            else j++;

            i++;

        }

        return laptopCount;
        // correct ans understanadable ans is :
        int minLaptops(int N, int start[], int end[]) {
       
       sort(start, start+N);
       sort(end, end+N);
       int ans=0, count=0, i=0, j=0;
       while(i<N){
           if(start[i]<end[j]){
               count++;
               ans = max(count, ans);
               i++;
               
           }
           else{
               count--;
               j++;
               
           }
        }
        return ans;
       
    }