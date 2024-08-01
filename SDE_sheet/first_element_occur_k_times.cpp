// https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times5150/1?page=1&curated[]=1&sortBy=submissions

// solve it tomorrow.

map<int, int> dict;
        for(int i=0; i<n; i++){
            dict[a[i]]++;
            if(dict[a[i]] >=k) return a[i];
        }
return -1;