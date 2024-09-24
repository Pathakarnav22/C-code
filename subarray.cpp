#include<iostream>
#include<climits>
using namespace std;
/*  FOR PRINTING SUBARRAY
int main(){
    int n;
    cin>>n;
    int arr[n];
    for ( int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<endl;
        }
    }
}*/
//Brute force apporcah
/*
int main(){
    int n;
    cin>>n;
    int arr[n];
    int maxSum=INT_MIN;
    for ( int i=0;i<n;i++){
        for(int j=i;j<n;j++){
        int sum=0;
        for(int k=i;k<=j;k++){
            sum+=arr[k];
        }
        maxSum=max( maxSum,sum);
        }
    }
    cout<<maxSum<<endl;
}
*/
//Cumulaive sum approach
/*int main(){
    int n;
    cin>>n;
    int arr[n];
    for ( int i=0;i<n;i++){
        cin>>arr[i];
    }
    int currsum[n+1];
    currsum[0]=0;
    for (int i=0;i<n;i++){
        currsum[i]=currsum[i-1]+arr[i-1];
    }
        int maxSum=INT_MIN;
        for(int i=1;i<n;i++){
            int sum=0;
            for( int j=0;j<i;j++){
                sum = currsum[i]-currsum[j];
                maxSum=max(sum,maxSum);
            }
        }
        cout<<maxSum;
    }*/
    #include<iostream>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    int a[n][m];
    for ( int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for ( int i=0;i<n;i++){
        for ( int j=0;j<n;j++){
            cout<<a[i][j]<<endl;
        }
    }
    return 0;
}

    
