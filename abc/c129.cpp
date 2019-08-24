#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> broken(n+1);
  vector<long long int> dp(n+2);

  for (int i = 0; i < m; i++) {
    int j = 0;
    cin >> j;
    broken[j] = 1;
  }
  
  dp[n] = 1;
  for (int i = n-1; i >= 0; i--) {
    if (broken[i]) {
      dp[i] = 0;
      continue;
    }
    dp[i] = (dp[i+2] + dp[i+1]) % 1000000007;
  }
  cout << dp[0] << endl;
  return 0;
}