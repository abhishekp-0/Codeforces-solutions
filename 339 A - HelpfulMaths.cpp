#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    int arr[n/2+1];
    for(int i=0; i<n;i+=2){
        string c=s.substr(i,1);
        int x= stoi(c);
        arr[i/2]=x;
    }

    sort(arr, arr+n/2+1);

    for(int i=0;i<n/2+1;i++){
        if(i==n/2){
            cout<<arr[i];
        }
        else{
            cout<<arr[i]<<"+";
        }
    }

    return 0;
}