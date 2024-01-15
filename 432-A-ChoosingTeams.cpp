#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> y(n,0);
    for(int i=0;i<n;i++){
        cin>>y[i];
    }

    sort(y.begin(),y.end());
    for(int i=0;i<n;i++){
        //cout<<y[i]<<endl;
    }
    int count=0;
    for(int i=0;i<n;i++){
        //cout<<i<<" "<<y[i]<<endl;
        if(y[i]>5-k){
            break;
        }
        count++;
    }

    cout<<count/3;
    return 0;
}