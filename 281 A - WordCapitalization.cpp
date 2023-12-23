#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    char c=toupper(s[0]);
    cout<<c<<s.substr(1,s.length()-1);
    return 0;
}