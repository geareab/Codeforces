#include <bits/stdc++.h>
using namespace std;

// Macros
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define MOD 1000000007 // or any other modulus depending on the problem

// Function declarations
void solve(int a); // Problem-solving function

int main() {
    fast_io; // Fast I/O
    int t = 1; // Number of test cases (usually 1, can change as per problem)
    cin >> t; // Uncomment if multiple test cases
    solve(t);
}

void solve(int t) {
    if (t%2 == 0 && t>2){
printf("YES");
    }    
    else{
        printf("NO");
    }
}
