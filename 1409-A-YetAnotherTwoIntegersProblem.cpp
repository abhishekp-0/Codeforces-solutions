#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<abs(a-b)/10+(1)*(abs(a-b)%10!=0)<<endl;
    }
    return 0;
}