#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=0;
    int t=arr[k-1];

    for(int i=0;i<n;i++){
        if(arr[i]>=t && arr[i]>0){
            a++;
        }
    }

    cout<<a;
    

}