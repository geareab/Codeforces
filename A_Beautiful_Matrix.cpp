#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int g = -1, h = -1;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> t;
            if (t == 1) {
                h = i;
                g = j;
                goto done; // jump out of both loops
            }
        }
    }

done:
   
    cout << abs(h-2) + abs(g-2) << endl;
    return 0;
}
