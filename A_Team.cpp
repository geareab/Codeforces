#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;
    int res=0;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if ((a+b+c)>=2){

            res+=1;
        };

    }
cout<<res;
    return 0;
}