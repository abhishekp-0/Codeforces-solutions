#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;

    int c=(w*(w+1)/2)*k;

    cout<<(n<c)*(c-n);
    
}