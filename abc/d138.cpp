#include <bits/stdc++.h>
using namespace std;

vector<long long> g[200005];
vector<long long> x;

void dfs(int v, int p = -1)
{
  for (int u: g[v]) {
    if (u == p) {
      continue;
    }
    x[u] += x[v];
    dfs(u, v);
  }
}


int main () {
  long long  n, q;
  cin >> n >> q;

  for (int i = 1; i < n; i++)
  {
    long long from, to;
    cin >> from >> to;
    from--;
    to--;
    g[from].push_back(to);
    g[to].push_back(from);
  }

  x.resize(n);
  for (int i = 1; i <= q; i++)
  {
    long long from, value;
    cin >> from >> value;
    from--;
    x[from] += value;
  }

  dfs(0, -1);
  
  for (int i = 0; i < n; i++) {
    cout << x[i] << endl;
  }

  return 0;
}