// unique number > in the form of key-value pair

// we can't use hash > it is a reserved keyword..
// special fact  is O(1) time to search


#include <iostream>
using namespace std;
#include <math.h>
#define MAX 1000

bool hashTab[MAX+1][2];

int search(int x){
    if(x>=0){
        if(hashTab[x][0] == 1) return true;
        else return false;
    }
    else {
        if(hashTab[x][1] == 1) return true;
        else return false;
    }
    return false;
}

void insert(int a[], int l){
    for(int i=0; i<l;i++){
        if(a[i]>=0){
            hashTab[a[i]][0] = 1;

        }
        else {
            hashTab[abs(a[i])][1] = 1;

        }
    }


}


int main(){
    int a[] = {1,-1,8,-7,4,6,-10, -9};
    int l = sizeof(a) / sizeof(a[0]);
    insert(a,l);
    int ele;
    
    cout<<"enter the searching element : "<<endl;
    cin>>ele;
    int res = search(ele);
    if(res == 1) cout<<"Element is present "<<endl;
    else  cout<<"Element is not present "<<endl;

    return 0;
}