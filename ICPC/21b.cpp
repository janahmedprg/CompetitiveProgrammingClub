#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

vector<int> to_bin(int x) {
    vector<int> rst;
    for (int i=0; i<4; ++i) {
        rst.push_back(x%2);
        x/=2;
    }
    return rst;
}

void solve() {
    int d;
    cin >> d;
    int d1 = d%10;
    d /= 10;
    int d2 = d%10;
    d /= 10;
    int d3 = d%10;
    d /= 10;
    vector<int> b1 = to_bin(d1);
    vector<int> b2 = to_bin(d2);
    vector<int> b3 = to_bin(d3);
    vector<int> b4 = to_bin(d);

    for (int i=3; i>=0; --i) {
        if (b4[i] == 1) {
            cout << "*";
        } else {
            cout << ".";
        }
        cout << " ";

        if (b3[i] == 1) {
            cout << "*";
        } else {
            cout << ".";
        }
        cout << "   ";

        if (b2[i] == 1) {
            cout << "*";
        } else {
            cout << ".";
        }
        cout << " ";

        if (b1[i] == 1) {
            cout << "*";
        } else {
            cout << ".";
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}