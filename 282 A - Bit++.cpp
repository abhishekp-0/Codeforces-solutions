#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<3;j++){
            if(s[j]=='+'){
                x++;
                break;
            }
            else if(s[j]=='-'){
                x--;
                break;
            }
        }
    }
    cout<<x;
    return 0;
}