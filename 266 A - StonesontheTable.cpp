#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int nos;
    int i=0;
    while(i<n-1){
        if(s[i]==s[i+1]){
            nos++;
        }
        i++;
    }

    cout<<nos;
    return 0;
}