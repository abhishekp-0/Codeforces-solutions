#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s,z="-1";
        cin>>s;
        int n=s.length();
        for(int j=n/2;j>0;j--){
            string s1=s.substr(0,j), s2=s.substr(j,n-j);
            if(s1[0]=='0' || s2[0]=='0'){
                continue;
            }

            int a=stoi(s1);
            int b=stoi(s2);

            if(a<0 || b<0){
                continue;            
            }

            if(b<=a){
                continue;
            }

            if(s1+s2==s){
                z=s1+" "+s2;
                break;
            }
        }
        cout<<z<<endl;
    }
    return 0;
}