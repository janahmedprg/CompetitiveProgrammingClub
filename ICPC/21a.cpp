#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

void solve() {
    int n, s;
    cin >> n >> s;
    int curr = s;
    int tot = 0;
    int val;
    string str;
    for (int i=0;i<n;i++) {
        cin >> str;
        if (str.size()==2) {
            val = atoi(&str[0]) + 1;
        } else {
            val = atoi(&str[0]);
        }
        if (val > curr) {
            curr = s - val;
            tot++;
        } else {
            curr = curr - val;
        }
    }
    cout << tot << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}