#include <iostream>
#include <algorithm>
#include <climits>
#include <cstdlib>
using namespace std;

int n;

int dp[100010][5];
int a[100010];
int b[100010];
int c[100010];

int main()
{
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    cin >> b[i];
    cin >> c[i];
  }

  for (int i = 0; i < n; i++) {
    for (int k = 0; k < 5; k++) {
      dp[i][k] = INT_MIN;
    }
  }

  dp[0][0] = std::max({ b[0], c[0] });
  dp[0][1] = std::max({ a[0], c[0] });
  dp[0][2] = std::max({ a[0], b[0] });

  for (int i = 1; i < n; i++) {
    dp[i][0] = std::max({
      dp[i - 1][0] + b[i],
      dp[i - 1][0] + c[i]
    });
    dp[i][1] = std::max({
      dp[i - 1][0] + b[i],
      dp[i - 1][0] + c[i]
    });
    dp[i][2] = std::max({
      dp[i - 1][0] + b[i],
      dp[i - 1][0] + c[i]
    });
  }

  int res = std::max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]});
  cout << res << endl;
  return 0;
}
