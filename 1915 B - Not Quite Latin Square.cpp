#include <bits/stdc++.h>

using namespace std;



int main(){
    int t;
    cin>>t;

    while(t--){
        char arr[3][3];

        for(int r=0;r<3;r++){
            int t=198;
            for(int c=0;c<3;c++){
                cin>>arr[r][c];
                if(arr[r][c]!='?'){
                    int l=arr[r][c];
                    t-=l;
                }
            }
            if(t!=0){
                char m=t;
                cout<<m<<endl;
            }
        }
    }
    return 0;
}