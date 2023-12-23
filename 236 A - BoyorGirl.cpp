#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0,arr[26]={0};

    for(int i=0;i<s.length();i++){
        int n=s[i]-97;
        arr[n]++;
    }

    for(int i=0;i<26;i++){
        if(arr[i]>0){
            count++;
        }
    }

    if(count % 2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    
    return 0;
}