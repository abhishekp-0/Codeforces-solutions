#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    double c = static_cast<double>(b) / m;  //cost per ride of special ticket

    if (c >= a){
        cout << n * a;  //(cost of regular ticket) * (no. of rides)
    }

    else{
        cout << b * (n / m) + min( b , a * (n % m) );   //(cost of special ticket) * (no. of special tickets used) + (cost of regular ticket) * (no. of regular tickets used)
    }

    return 0;
}