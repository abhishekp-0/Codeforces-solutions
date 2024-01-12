#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,r=1;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr,arr+n);

        if(arr[n-1]==arr[0]){
            r=n;
        }

        cout<<r;

    }
    return 0;
}