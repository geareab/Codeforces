#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    int res=0;
    while(t--){
        string a;
        cin >>a;
        if (a =="++X" or a== "X++"){
            res+=1;

        }
        else if (a =="--X" or a== "X--")
        {
             res-=1;
        }
      
        




    }
    cout << res;
    return 0;
}