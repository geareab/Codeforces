#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;


    while(t--){
        string a;
        cin>>a;
        if (a.length()<=10){
            cout << a<<endl;
        }
        else{
            cout<<a[0]<<a.length()-2<<a[a.length() - 1]<<endl;
        }
    }
    return 0;
}