// search insert delete are in O(1) time complexity 

// find closest value 
// sorted data

// hashing applications : 

// 1. dictionaries 2. cryptography 3. caches 4 Routers  6. symbol table


#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;




//respected operations are find, insert , size(), clear, begin, end, erase, count



int main(){
    unordered_set<int> s;
    s.insert(10);    
    s.insert(20);    
    s.insert(30);    
    s.insert(40);    
    s.insert(50);

    for(auto i = s.begin(); i != s.end(); i++ ){
        cout<<(*i)<<endl;
    }

    int n=0;
    cout<<"enter the searching number  : "<<endl;
    cin>>n; 
    if(s.find(n) == s.end()) cout<<"number is not present "<<endl;
    else cout<<"number is present "<<endl;

    cout<<"size of the element is  : "<<s.size()<<endl;

    s.clear();

    cout<<"size of the element is  : "<<s.size()<<endl;

    
    if(s.count(n)) cout<<"key found "<<endl;
    else cout<<"key not found "<<endl;



    return 0;
}
