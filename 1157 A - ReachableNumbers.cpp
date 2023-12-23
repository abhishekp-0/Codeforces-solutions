#include <bits/stdc++.h>
using namespace std;

int fun(int n){
    n=n+1;
    while(n%10==0){
        n=n/10;
    }
    return n;
}

int main(){
    int n,count=9;
    cin>>n;
    if(n<10){
        cout<<count;
    }
    else{
        int d=n%10;
        count+=10-d;
        n=n/10;
        while(n/10>0){
            d=n%10;
            n/=10;
            count+=9-d;
        }
        cout<<count;
    }
    return 0;
}