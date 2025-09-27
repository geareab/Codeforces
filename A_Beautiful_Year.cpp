#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    
    int res = 0;
    while (t++)
    {

    int one, two, three, four;
    one = t / 1000;
    two = (t / 100) % 10;
    three = (t / 10) % 10;
    four = t % 10;

    set<int> s = {one, two, three, four};
    if (s.size() == 4) {
        cout << t << endl;
        break;
    }
    }
    
    return 0;
}