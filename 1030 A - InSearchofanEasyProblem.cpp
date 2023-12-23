#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a="EASY";
    for(int i=0;i<n;i++){
        int z;
        cin>>z;
        if(z==1){
            a="HARD";
            break;
        }
    }

    cout<<a;
    
    return 0;
}
