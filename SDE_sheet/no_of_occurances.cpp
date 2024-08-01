6 12
8 9 10 12 12 12
7 4
1  1  2  2  2  2  3
7 2 
1  1  2  2  2  2  


// solved by me >>>>😁

class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int count =0;
	    int low = 0, end = n-1;
	    while(end>=low)
	    {
	        if(arr[end] > x) end--;
	        else if (arr[low] < x) low ++;
	        else if(arr[end] == x ){
	            
	            count++;
	            end--;
	            
	        }
	        else if(arr[low] == x ){
	            
	            count++;
	            low++;
	            
	        }
	        
	        else if(arr[end] == x  && arr[low] == x && end != low)  {
	            count+=2;
	            low++, end--;
	            
	        }
	        
	        
	    }
	    return count;
	}
};