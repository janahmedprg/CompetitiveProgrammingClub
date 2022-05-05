#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

map<pair<stack<char>, string>, int> mapper;

int solve_line(stack<char> st, string str) {
    if (str.size() == 0) {
        if  (st.empty()) {
            return 1;
        } else {
            return 0;
        }
    } else if (str.size() < st.size()) {
        return 0;
    }

    switch (str[0]) {
        case '(':
            st.push('(');
            return solve_line(st, str.substr(1, str.size()-1));
            break;
        case '[':
            st.push('[');
            return solve_line(st, str.substr(1, str.size()-1));
            break;
        case '{':
            st.push('{');
            return solve_line(st, str.substr(1, str.size()-1));
            break;
        case '<':
            st.push('<');
            return solve_line(st, str.substr(1, str.size()-1));
            break;
        case ')':
            if (st.empty()) {
                return 0;
            } else if (st.top() == '(') {
                st.pop();
                return solve_line(st, str.substr(1, str.size()-1));
            } else {
                return 0;
            }
            break;
        case ']':
            if (st.empty()) {
                return 0;
            } else if (st.top() == '[') {
                st.pop();
                return solve_line(st, str.substr(1, str.size()-1));
            } else {
                return 0;
            }
            break;
        case '}':
            if (st.empty()) {
                return 0;
            } else if (st.top() == '{') {
                st.pop();
                return solve_line(st, str.substr(1, str.size()-1));
            } else {
                return 0;
            }
            break;
        case '>':
            if (st.empty()) {
                return 0;
            } else if (st.top() == '<') {
                st.pop();
                return solve_line(st, str.substr(1, str.size()-1));
            } else {
                return 0;
            }
            break;
        default:
            pair<stack<char>, string> paired;
            int total = 0;
            st.push('(');
            paired = make_pair(st, str.substr(1, str.size()-1));
            if (mapper.find(paired) == mapper.end()) {
                mapper[paired] = solve_line(st, str.substr(1, str.size()-1));
            }
            total += mapper[paired];
            st.pop();
            st.push('[');
            paired = make_pair(st, str.substr(1, str.size()-1));
            if (mapper.find(paired) == mapper.end()) {
                mapper[paired] = solve_line(st, str.substr(1, str.size()-1));
            }
            total += mapper[paired];
            st.pop();
            st.push('{');
            paired = make_pair(st, str.substr(1, str.size()-1));
            if (mapper.find(paired) == mapper.end()) {
                mapper[paired] = solve_line(st, str.substr(1, str.size()-1));
            }
            total += mapper[paired];
            st.pop();
            st.push('<');
            paired = make_pair(st, str.substr(1, str.size()-1));
            if (mapper.find(paired) == mapper.end()) {
                mapper[paired] = solve_line(st, str.substr(1, str.size()-1));
            }
            total += mapper[paired];
            st.pop();
            if (!st.empty()) {
                st.pop();
                paired = make_pair(st, str.substr(1, str.size()-1));
                if (mapper.find(paired) == mapper.end()) {
                    mapper[paired] = solve_line(st, str.substr(1, str.size()-1));
                }
                total += mapper[paired];
            }
            return total;
            break;
    }
}

void solve() {
    stack<char> st;

    string input;
    cin >> input;
    cout << solve_line(st, input) << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}