#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

int N, W;
long long dp[110][100010] = {0};
int v[110];
int w[110];

int main()
{
  cin >> N >> W;
  for (int i = 0; i < N; i++) {
    cin >> w[i];
    cin >> v[i];
  }
  
  for (int i = 0; i < N; i++)
  {
    for (int sw = 0; sw <= W; sw++)
    {
      if (sw - w[i] >= 0)
      {
        if (dp[i + 1][sw] < dp[i][sw - w[i]] + v[i])
        {
          dp[i + 1][sw] = dp[i][sw - w[i]] + v[i];
        }
      }

      if (dp[i + 1][sw] < dp[i][sw])
      {
        dp[i + 1][sw] = dp[i][sw];
      }
    }
  }

  cout << dp[N][W] << endl;
  return 0;
}