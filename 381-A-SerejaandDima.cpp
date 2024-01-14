#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,b=0;
    cin>>n;
    vector<int> c;

    for(int i=0;i<n;i++){
        int in;
        cin>>in;
        c.push_back(in);
    }
    int i=1;
    while(c.size()){
        if(i%2!=0){
            if(c.at(0)>c.at(c.size()-1)){
                a+=c.at(0);
                c.erase(c.begin());
            }
            else{
                a+=c.at(c.size()-1);
                c.erase(c.end()-1);
            }
        }
        else{
            if(c.at(0)>c.at(c.size()-1)){
                b+=c.at(0);
                c.erase(c.begin());
            }
            else{
                b+=c.at(c.size()-1);
                c.erase(c.end()-1);
            }
        }
        i++;
    }
    cout<<a<<" "<<b;

    return 0;
}