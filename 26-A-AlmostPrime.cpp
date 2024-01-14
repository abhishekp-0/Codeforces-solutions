#include <bits/stdc++.h>
const int N = 1e7+1;
using namespace std;
vector<bool>is_prime(N,true);
vector<int>no_of_primefactors(N,0);

int main(){
    
    is_prime[0]=false;
    is_prime[1]=false;
    for(int i=2;i<N;i++){
        if(is_prime[i]==true){

            for(int j=2*i;j<=N;j+=i){
                is_prime[j]=false;
                no_of_primefactors[j]++;
            }
        }
    }

    int n,count=0;
    cin>>n;

    for(int i=6;i<=n;i++){
        if(no_of_primefactors[i]==2){
            count++;
        }
    }
    cout<<count;
    return 0;
}