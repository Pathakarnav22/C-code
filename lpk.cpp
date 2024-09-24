#include<iostream>
using namespace std;
/*int linearSearch(int arr[],int n,int key){
    for ( int i=0;i<n;i++){
        if ( arr[i] == key){
            return  i;
        }
    }
    return -1;
}
int main(){
    int n;
    int key;
    cin>>n;
    int arr[n];
    for ( int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
}*/
int BinarySearch(int n,int key,int arr[]){
    int s=0;
    int e=0;
    while(s<=e){
        int mid = (s+e)/2;
    for ( int i=0;i<n;i++){
        if (arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        else{
            e = mid+1;
        }
    }
    return -1;
}
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    int key;
    cin>>key;
    cout<<BinarySearch<<(key,n,key)<<endl;
}