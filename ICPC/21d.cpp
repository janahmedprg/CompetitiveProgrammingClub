//TODO NOT CURRENTLY WORKING

#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

void solve() {
    int r, c;
    cin >> r >> c;
    int mini = 3;
    int twos = 0;
    bool zero = false;
    for (int i=0;i<r*c;++i) {
        int x;
        cin >> x;
        if (x==0 && !zero) {
            zero = true;
        } else if (x == 2) {
            mini = mini < x ? mini : x;
            twos++;
        } else {
            mini = mini < x ? mini : x;
        }
    }

    if (zero) {
        cout << mini;
    } else {
        if (twos%2) {
            cout << (int)round(pow(2, twos/2));
        } else {
            cout << "0";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    solve();
    return 0;
}