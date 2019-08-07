#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;
const long long INF = INT_MAX;

const int MAX_N = 110;
const int MAX_V = 100100;

int N;
long long W, w[MAX_N], v[MAX_N];

long long dp[MAX_N][MAX_V];

int main()
{
  cin >> N >> W;
  for (int i = 0; i < N; i++)
  {
    cin >> w[i] >> v[i];
  }

  // init
  for (int i = 0; i < MAX_N; i++)
  {
    for (int j = 0; j < MAX_V; j++)
    {
      dp[i][j] = INF;
    }
  }

  dp[0][0] = 0;
  
  for (int i = 0; i < N; ++i)
  {
    for (int sv = 0; sv < MAX_V; ++sv)
    {
      if (sv - v[i] >= 0)
      {
        if (dp[i + 1][sv] > dp[i][sv - v[i]] + w[i])
        {
          dp[i + 1][sv] = dp[i][sv - v[i]] + w[i];
        }
      }
      
      if (dp[i + 1][sv] > dp[i][sv])
      {
        dp[i + 1][sv] = dp[i][sv];
      }
    }
  }

  long long res = 0;
  for (int sv = 0; sv < MAX_V; ++sv) {
    if (dp[N][sv] <= W)
    {
      res = sv;
    }
  }

  cout << res << endl;
  return 0;
}