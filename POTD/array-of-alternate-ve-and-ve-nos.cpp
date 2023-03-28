#include<bits/stdc++.h>
#include<vector>
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int> plus, minus;
	    
	    
	    int i=0, j=0, k=0;

	    for(int i=0; i<n; i++){
	        
	        if(arr[i]<0) minus.push_back(arr[i]);
	        else  plus.push_back(arr[i]);
	        
	    }
	    while(i<minus.size() && j<plus.size()){
	        
	        arr[k++] = plus[j++];
	        arr[k++] = minus[i++];
	        
	        
	        
	    }
	    if(plus.size() == 0 || minus.size() == 0) return;
	    if(plus.size() != 0){
	        
    	    while(j<plus.size()){
    	        arr[k++] = plus[j++];
    	    }
	    }
	    if(minus.size() != 0){
	        
    	    while(i<minus.size()){
    	        arr[k++] = minus[i++];
    	    }
	    }
	    
	    
	    
	}
};