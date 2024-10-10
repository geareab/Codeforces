#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,g;
    cin >> t>>g;
    int res=0;
    int arr[t];
        for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    int temp = arr[g-1];
for(int i = 0; i < t; i++) {
    if (arr[i]>=temp and arr[i]>0){
res ++;
    }
  
}
    
cout <<res;
    return 0;
}