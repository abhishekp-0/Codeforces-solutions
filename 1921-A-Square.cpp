#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[4][2];
        for(int i=0;i<4;i++){
            cin>>arr[i][0];
            cin>>arr[i][1];
        }

        int x,y;
        if(arr[0][0]==arr[1][0]){
            x=abs(arr[0][0]-arr[2][0]);
        }
        else{
            x=abs(arr[0][0]-arr[1][0]);
        }
        if(arr[0][1]==arr[1][1]){
            y=abs(arr[0][1]-arr[2][1]);
        }
        else{
            y=abs(arr[0][1]-arr[1][1]);
        }
        cout<<x*y<<endl;
    }
        
    return 0;
}