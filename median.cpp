#include <iostream>
using namespace std;

int main(){
            int l  = v.size();
		    sort(v.begin(), v.end());
		    int mid = floor(l/2);
		    if (l % 2 ==0){
		        return (v[mid-1] + v[mid]) / 2;
		    }
		    else{
		         return v[mid];
		    }
    
}

