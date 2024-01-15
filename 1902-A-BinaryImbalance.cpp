#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans="NO";
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                ans="YES";
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}