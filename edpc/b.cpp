#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

int n, k;
long INF = 100010;
int dp[100010];
int c[100010];

int main()
{
  cin >> n >> k;

  for (int i = 0; i < n; i++)
  {
    cin >> c[i];
  }

  for (int i = 0; i < 100010; i++)
  {
    dp[i] = INF;
  }

  dp[0] = 0;
  dp[1] = dp[0] + abs(c[1] - c[0]);

  for (int i = 2; i < n; i++)
  {
    int temp = INT_MAX;
    for (int j = 1; j <= k; j++)
    {
      int step = dp[i - j] + abs(c[i] - c[i - j]);
      if (step < temp && i - j >= 0)
      {
        temp = step;
      }
    }
    dp[i] = temp;
  }

  cout << dp[n - 1] << endl;
  return 0;
}
