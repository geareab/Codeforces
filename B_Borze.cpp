#include <bits/stdc++.h>
using namespace std;


int main() {
       vector<int> t;

    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '.') {
            t.push_back(0);
        }
        else if (s[i] == '-') {
            if (i + 1 < s.size() && s[i + 1] == '.') {
                t.push_back(1);
                i++;
            }
            else if (i + 1 < s.size() && s[i + 1] == '-') {
                t.push_back(2);
                i++;
            }
        }
    }
    for (int x : t) {
        cout << x;
    }
    return 0;
}