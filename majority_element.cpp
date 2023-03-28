1
15
13
9 14 10 10 1 2 1 7 10 10 14 19 9
5
3 1 3 3 2
3
1,2,3

// correct code
int majorityElement(int a[], int n)
    {
        
        // your code here
        // to return element if count > n/2;
        
        int ma = 0;
        int count = 0;
        for(int i=0; i<n; i++){
            if(a[i] == ma) count++;
            else count --;
        }
        count=0;
        for(int i=0; i<n; i++){
            if(a[i] == ma) count++;
                
            
        }
        if(count>n/2) return ma;
        else return -1;
    
    }

    // understand this  
    // link : https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1?page=1&category[]=Sorting&category[]=Searching&sortBy=submissions

    // solved and understood
