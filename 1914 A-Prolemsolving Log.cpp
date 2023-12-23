#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n,count=0;
        cin >> n;
        string s;
        cin >> s;
        int arr[26]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};

        for(int j = 0; j < n; j++){
            char c = s[j];
            int x = c;
            arr[x-65]--;
            if(arr[x-65]==0){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
