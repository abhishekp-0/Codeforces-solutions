#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,f,a,b;
        cin>>n>>f>>a>>b;
        long m[n];
        for(long long i=0;i<n;i++){
            cin>>m[i];
        }
        long long c[n];
        f-=min( ((m[0])*a) , b);
        for(long long i=1;i<n;i++){
            f-=min( ((m[i]-m[i-1])*a) , b);

        }

        if(f>0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}