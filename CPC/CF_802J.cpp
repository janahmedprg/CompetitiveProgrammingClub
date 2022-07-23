#include <bits/stdc++.h>

using namespace std;

int dfs(int node, int sum, vector<bool> visited, vector<pair<int, int>> *Avec)
{
    visited[node] = true;
    int ans = sum;
    for (auto u : Avec[node])
    {
        if (!visited[u.first])
        {
            ans = max(ans, dfs(u.first, sum + u.second, visited, Avec));
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int>> Avec[n];
    vector<bool> visited(n, false);
    for (int i = 0; i < n - 1; ++i)
    {
        int u, v, c;
        cin >> u >> v >> c;
        Avec[u].push_back({v, c});
        Avec[v].push_back({u, c});
    }
    int ans = dfs(0, 0, visited, Avec);
    cout << ans << "\n";
}