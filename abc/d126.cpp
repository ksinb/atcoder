#include <bits/stdc++.h>
using namespace std;

int N;
using Edge = pair<int, int>;
using Graph = vector<vector<Edge>>;
Graph g;
vector<int> color;

void dfs(int i, int c, int p) {
  color[i] = c;
  for (auto e: g[i]) {
    if (e.first == p) {
      continue;
    }
    if (e.second % 2 == 0) {
      dfs(e.first, c, i);
    } else {
      dfs(e.first, 1-c, i);
    }
  }
}

int main() {
  cin >> N;
  g.assign(N, vector<Edge>());
  for (int i = 0; i < N-1; i++) {
    int u, v, w;

    cin >> u >> v >> w;
    u--;
    v--;
    g[u].push_back(Edge(v, w));
    g[v].push_back(Edge(u, w));
  }

  color.assign(N, 0);
  dfs(0, 1, -1);
  for (auto c: color) {
    cout << c << endl;
  }

  return 0;
}