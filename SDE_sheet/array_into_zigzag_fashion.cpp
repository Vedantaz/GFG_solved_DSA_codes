#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Program for zig-zag conversion of array
    // void swap(int x, int y){
    //     int tm = x;
    //     x=y;
    //     y=tm;
    // }
    void zigZag(int arr[], int n) {
        
        // code here
        int i=0, j=1;
        while(j<n){
            if(i%2 == 0){
                if(arr[i] > arr[j]) swap(arr[i], arr[j]);
            }
            else {
                if(arr[i] < arr[j])  swap(arr[i], arr[j]);
            }
            i++;
            j++;
        }
       
    }
};
int main(){   
    return 0;
}