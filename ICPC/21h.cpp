#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

vector<char> segmentedSieve(ll L, ll R) {
    ll lim = sqrt(R);
    vector<char> mark(lim+1, false);
    vector<ll> primes;
    for (ll i = 2; i<= lim; ++i) {
        if (!mark[i]) {
            primes.emplace_back(i);
            for (ll j =i*i; j<=lim; j+= i) {
                mark[j] = true;
            }
        }
    }

    vector<char> isPrime(R - L + 1, true);
    for (ll i : primes)
        for (ll j = max(i*i, (L + i - 1)/i*i); j<=R; j+=i)
            isPrime[j-L] = false;
    if (L == 1)
        isPrime[0] = false;
    return isPrime;
}

void solve() {
    segmentedSieve(100000, 1000000000);
    cout << "done" << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}