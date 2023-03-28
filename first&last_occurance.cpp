
// wrong approach to recursion > 
// create 2 functions firstOccurence, lastOccurence and then call it in the find function to use recursion 

int firstOccurence(int arr[] , int n  , int x , int index1){
   // base case 

   if(index1 == n){

       return -1;

   }

   int ans = arr[index1];

   if(ans == x){

       return index1;

   }

   else{

       firstOccurence(arr , n , x , index1+1);

   }

}
int lastOccurence(int arr[] , int n , int x , int index2){

    // base case

    if(index2==-1){

        return -1;

    }

    

    int ans = arr[index2];

    

    if(ans==x){

        return index2;

    }

    else{

        lastOccurence(arr , n , x , index2-1);

    }

}

 

vector<int> find(int arr[], int n , int x )

{

    // finding first and last occurence of the element using recursion

    vector<int>ans;

    int index1 =0;

    int index2 = n-1;

    ans.push_back(firstOccurence(arr,n , x , index1));

    ans.push_back(lastOccurence(arr , n , x, index2));

    return ans;

}

// solution without recursion using while loop  , tc : O(logN), sc : O(1) similar as recursion


     

int l =0, r=n-1;

    vector<int> ans;

    while(l<=r){

        if(arr[l]!=x){

            l++;

        }

        if(arr[r]!=x){

            r--;

        }

        if(arr[l]==x && arr[r]==x){

            ans.push_back(l);

            ans.push_back(r);

            break;

        }

    }

    if(l>r){
        ans.push_back(-1);
        ans.push_back(-1);
    }
    return ans;