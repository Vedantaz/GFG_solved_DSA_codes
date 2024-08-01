#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int k) {
        int low = 0;
        int end = n-1;
        while(end>=low){
            
            int mid = (end+low)/2;
            if (arr[mid] < k){
                low = mid+1;
            }
            
            else if (arr[mid] == k){
                return mid;
            }
            else
            end = mid-1;
        }
        return -1;
}
int main(){
    
    return 0;
}