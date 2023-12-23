#include <bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            int z;
            cin>>z;
            if(z==1){
                cout<<sqrt((3-i)*(3-i))+sqrt((3-j)*(3-j));
            }
        }
    }
    return 0;
}