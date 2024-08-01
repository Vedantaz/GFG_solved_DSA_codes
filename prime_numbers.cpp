#include <iostream>
#include <math.h>
using namespace std;

int isPrime(int N){
        if(N == 1){
            return 0;
        }
        for(int i = 2; i <= sqrt(N); i++){
            if(N % i == 0){
                return 0;
            }
        }
        return 1;
    }
int main(){
    int N;
    cout<<"Enter the value for the checking of prime number : "<<endl;
    cin>>N;
    if(isPrime(N) == 0) {cout<<"no"<<endl;}
    else cout<<"yes"<<endl;
}