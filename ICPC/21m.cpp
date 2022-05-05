#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

void solve() {
    int n;
    cin>>n;
    int totalL = 0;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        int lag=a-(b+totalL);
        if(lag>0){
            totalL+=lag;
        }
    }
    cout<<totalL<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}