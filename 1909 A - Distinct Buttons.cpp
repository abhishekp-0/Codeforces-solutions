#include <bits/stdc++.h>
using namespace std;

bool xcheck(int arr[][2], long long n){
    int r=arr[0][0];
    for(int i=1;i<n;i++){
        if(r*arr[i][0]<0){
            return false;
        }
    }
    return true;
}

bool ycheck(int arr[][2], int n){
    int r=arr[0][1];
    for(int i=1;i<n;i++){
        if(r*arr[i][1]<0){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int arr[n][2];

        for(int i=0;i<n;i++){
            cin>>arr[i][0]>>arr[i][1];
        }

        if(xcheck(arr,n) || ycheck(arr,n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}