#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,p,q;
    cin>>n;
    cin>>p;
    long long X[p],L[n]={0};
    for (long long i=0;i<p;i++){
        cin>>X[i];
        L[X[i]-1]++;
    }

    cin>>q;
    long long Y[q];
    for (long long i=0;i<q;i++){
        cin>>Y[i];
        L[Y[i]-1]++;
    }

    string s="I become the guy.";
    for(long long i=0;i<n;i++){
        if(L[i]==0){
            s="Oh, my keyboard!";
            break;
        }
    }
    cout<<s;
    return 0;
}