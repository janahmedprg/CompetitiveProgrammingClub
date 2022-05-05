#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

int solve(string seq, string sub, bool inst);

int solve(string seq, string sub, bool inst){
    char fl = sub[0];
    int count = 0;
    if(sub.size() == 1){
        for(int i = 0; i < seq.size(); i++){
            if(seq[i] == fl){
                count++;
            }
        }
        return count;
    }
    for(int i = 0; i < seq.size(); i++){
        if(seq[i] == fl){
            if(inst){
                count += solve(seq.substr(i+1, seq.size()-i-1) + seq.substr(0, i), sub.substr(1,sub.size()-1), false);
            }
            else{
                count += solve(seq.substr(i+1, seq.size()-i-1), sub.substr(1, sub.size()-1), false);
            }
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string seq, sub;
    cin>>seq;
    cin>>sub;
    cout << solve(seq, sub, true) % 1000000007 << endl;
}