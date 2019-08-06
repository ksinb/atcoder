#include <iostream>
#include <cstdlib>
using namespace std;

int n;
long INF = 1LL << 60;
int dp[100010];
int c[100010];

int main()
{
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> c[i];
  }

  for (int i = 0; i < 10010; i++)
  {
    dp[i] = INF;
  }

  dp[0] = 0;
  dp[1] = dp[0] + abs(c[1] - c[0]);
  
  for (int i = 2; i < n; i++) {
    int step1 =  dp[i - 1] + abs(c[i] - c[i - 1]);
    int step2 =  dp[i - 2] + abs(c[i] - c[i - 2]);
    if (step1 < step2) {
      dp[i] = step1;
    } else {
      dp[i] = step2;
    }
  }

  cout << dp[n - 1] << endl;
  return 0;
}