
/*int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    int Max=INT_MIN;
    int Min=INT_MAX;
    for(int i=0;i<n;i++){
        Max = max(Max,arr[i]);
        Min = min(Min,arr[i]);
    }
    cout<<Max<<" "<<Min<<" "<<endl;
}*/
//Linear sEARCH
/*int linearSearch(int arr[],int n, int key){
    for(int i=0;i<n;i++){
        if (arr[i]==key){
            return 1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<linearSearch(arr,n,key)<<" "<<endl;
    return 0;
}*/
//binary search 
/*int main(){
    int n;
    cin>>n;
    int arr[n];

    for( int i=0; i<n;i++){
        cin>>arr[i];}
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if (arr[j]<arr[i]){
                int temp= arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    int counter = 1;
    while(counter<n){
    for(int i=0;i<n-counter;i++){
        if (arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    counter++;
}
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
*/
/*int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=current;
}
for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout << endl;
}*/
/*nt main(){
    int mx=-199999;
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        cout<<mx<<" "<<endl;
    }
    return 0;
}*/
/*int main(){
    int n;
    cin>>n;
    int arr[n];
    for ( int i=0;i<n;i++){
        cin >> arr [i];
    }
int crr=0;
    for( int i=0;i<n;i++){
        crr=0;
        for ( int j=i;j<n;j++){
            crr+=arr[j];
        cout<<crr<<endl;
        }
    }
}*/
#include <iostream>
#include<cmath>
using namespace std;
void update(int *a,int *b) {
    int sum ;
    sum = *a + *b;
    cout<<sum;
}
void update2(int *a,int *b){
    int dif;

    dif = *a - *b;
    cout<<dif;
        
    }  

int main() {
    int a, b, sum,dif;
    int*pa = &a;
    int*pb = &b;
    cout << update(a,b) << update2(a,b);

    return 0;
}