#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;

        for(int j=0;j<n-k-1;j++){
            cout<<n-j<<" ";
        }

        for(int j=1;j<=k+1;j++){
            cout<<j<<" ";
        }

        cout<<endl;
    }
return 0;
}