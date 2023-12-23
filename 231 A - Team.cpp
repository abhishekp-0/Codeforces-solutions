#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    int arr[n][3];

    for(int i=0;i<n;i++){
        int tcount=0;

        for(int j=0;j<3;j++){
            cin>>arr[i][j];

            if(arr[i][j]==1){
                tcount++;
            }
        }

        
        if(tcount>1){
            count++;
        }
    }

    cout<<count;


}