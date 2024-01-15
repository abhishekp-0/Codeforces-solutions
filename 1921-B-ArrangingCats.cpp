#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans;
        cin>>n;
        string s,f;
        cin>>s>>f;
        if(s==f){
            cout<<0<<endl;
            continue;
        }
        int sc=0;
        int fc=0;
        int df=0;
        for(int i=0;i<n;i++){
            df+=abs((int(s[i])-'0')-(int(f[i])-'0'));
            sc+=int(s[i])-'0';
            fc+=int(f[i])-'0';
        }
        int rm=abs(sc-fc);
        int mv=(df-rm)/2;
        cout<<rm+mv<<endl;
    }    
    return 0;
}