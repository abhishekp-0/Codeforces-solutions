#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,r=0;
    cin>>n;
    int d[5]={100,20,10,5,1};

    for(int i=0;i<5;i++){
        r+=n/d[i];
        n%=d[i];
    }
    cout<<r;
    return 0;
}