#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a=0;
    cin>>n>>m;
    char arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    
    int ansarr[m];
    for(int i=0;i<m;i++){
        cin>>ansarr[i];
    }

    for(int j=0;j<m;j++){
        //cout<<"j="<<j<<endl;
        int o[5]={0};
        for(int i=0;i<n;i++){
            //cout<<"    i="<<i<<endl;
            int c=arr[i][j]-65;
            o[c]++;
            //cout<<"        c="<<c<<"  o[c]="<<o[c]<<endl;
        }
        int max=0;
        for(int k=0;k<5;k++){
            //cout<<"    k="<<k<<"  o[k]="<<o[k]<<endl;
            if(o[k]>max){
                max=o[k];
                //cout<<"        max set to "<<max<<endl;
            }
        }
        a+=max*ansarr[j];
        //cout<<"    a increased to "<<a<<endl;
    }

    cout<<a;

    return 0;
}