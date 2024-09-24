#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//palindriome string
/*int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check = 1;
    for(int i=0;i<n;i++){
        if (arr[i] != arr[n-1-i]){
            check=0;
            break;
        }
    }
    if (check == true){
        cout<<"word is palindrom"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }
}
 */
int main(){
    string str="adsfjhalsad";
    //convert into upper
for ( int i=0;i < str.size();i++){
    if (str[i]>='a'&& str[i]<='z'){
        str[i]-=32;
    }
    cout<<str<<endl;
}
   //convert into lower
   for (int i=0;i<str.size();i++){
    if ( str[i]>='A' && str[i]<='Z'){
        str[i]+=32;
    }
    cout<<str<<endl;
   }



}
