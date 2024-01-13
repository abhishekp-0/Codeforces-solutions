#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string r="YES";
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr,arr+n);

        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]>1){
                r="NO";
                break;
            }
        }

        cout<<r<<endl;

    }
    return 0;
}