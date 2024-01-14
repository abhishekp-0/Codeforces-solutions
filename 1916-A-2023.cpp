#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,p=1;
        cin>>n>>k;
        long long b[n];
        for(int i=0;i<n;i++){
            cin>>b[i];
            p*=b[i];
        }

        if(2023%p==0 && p<=2023){
            cout<<"YES"<<endl<<2023/p;
            for(int i=0;i<k-1;i++){
                cout<<" "<<1;
            }
        }

        else{
            cout<<"NO";
        }

        cout<<endl;
    }

    return 0;
}