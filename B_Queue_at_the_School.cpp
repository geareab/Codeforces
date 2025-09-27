#include <bits/stdc++.h>
using namespace std;


int swapPos(vector<char>& a) {
    for (int i = 0; i < a.size() - 1; i++) {
        if (a[i]== 'B' and a[i+1] == 'G') {
            swap(a[i], a[i+1]);
            i++;
        }
    }
    return 0;
}


int main() {
    int x = 0;
    int y = 0;

    cin >> x >> y;

    vector<char> a(x);
    for (int i = 0; i < x; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < y; i++) {
        swapPos(a);
    }
     for (int i = 0; i < x; i++) {
        cout << a[i];
    }

}

