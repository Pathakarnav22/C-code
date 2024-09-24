#include<iostream>

using namespace std;
 // Check whether given number is power of 2
 bool ispowerof2( int n){
    return  ( n && !( n && (n-1)));
     }
    
    int main(){
        cout<<ispowerof2(16)<<endl;
    }