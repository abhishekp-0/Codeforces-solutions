#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        vector<int>x;
        set<int>val;
        for(int i=0;i<n;i++){
            int xi;
            cin>>xi;
            x.push_back(xi);
        }

        sort(x.begin(),x.end());

        for(int i=0;i<n;i++){
            if(val.count(x[i])){
                val.insert(x[i]+1);
            }
            else{
                val.insert(x[i]);
            }
        }

        cout<<val.size()<<endl;

    }
    return 0;
}       