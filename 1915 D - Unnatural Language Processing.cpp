#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  long long test;
  cin>>test;
  while(test--){
  long long n;
  cin>>n;
    long long arr[n];
    for(int i =0;i<n;i++){
      cin>>arr[i];
    }
    long long sum =0;
    for(int i =0;i<n;i++){
     sum += arr[i];
    }
    bool ans = false;
    for (long long j = 0; j*j<=sum; j++){
      if (j*j == sum)
  ans = true;
        }
    if(ans){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
    }
  }