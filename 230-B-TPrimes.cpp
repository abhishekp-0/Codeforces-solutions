#include <bits/stdc++.h>
const int N = 1e7+1;
using namespace std;
vector<bool>is_prime(N,true);
bool isPerfectSquare(long double x){
    long long sr=sqrt(x);
    return(sr * sr==x);
}

int main(){
    
    is_prime[0]=false;
    is_prime[1]=false;
    for(int i=2;i<N;i++){
        if(is_prime[i]==true){

            for(int j=2*i;j<=N;j+=i){
                is_prime[j]=false;
            }
        }
    }

    long int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(is_prime[sqrt(n)] && isPerfectSquare(n)){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
