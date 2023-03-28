https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1?page=1&difficulty[]=-1&category[]=Algorithms&category[]=Sorting&category[]=Binary%20Search&sortBy=submissions

// solve it > not solved yet...

sort(arr, arr+n);
        int i=0;
        int f = 0,b=n-1;
        bool res=false;
        for(i=0; i<n; i++){
            while (f+b+i==0){
                if(arr[i]+arr[f]+arr[b] == 0){
                    res = true;
                    cout<<1;
                    break;
                }
                else if(arr[i]+arr[f]+arr[b] > 0){
                    res = false;
                    b--;                
                }
                else{
                    res = false;
                    f++;
                }
            }
            f = 0, b = n-1;
            if(res == true) return 1;
        }
        if(res == false) return 0;
        return 1;

// 7
// 63 -30 4 13 85 -6 11
// 5
// 0 -1 2 -3 1
// 6
// 60 -65 5 -21 8 93
// 6
// 97 -27 2 -34 61 -39
///////       findTriplets        ////////
sort(arr, arr+n);
        bool res = false;
        int i=0, f=0, r = n-1, total = 0;      
        if(n<3){
          return res;
        }
        while(i<n){
            while(f<r){
                total = arr[i] + arr[f] + arr[r];
                if(total<0){
                    f++;
                }
                else if (total >0){
                    r--;
                }
                else{
                    res = true;
                    return 1;
                }
            }
            i++;
            if(res == true)return 1;
        }
        
        return 0;