#include <bits/stdc++.h>
#include<iomanip>
using namespace std;

const long int mod = 1000000007;

int main() {
  char s[100005]; // do not use string
  cin >> s;

  long int dp[100005][13];
  dp[0][0] = 1;

  long int mul = 1;
  int n = strlen(s);

  for (int i = 0; i < n; i++) {
      if (s[n - (i+1)] == '?') {
        for (int j = 0; j < 13; j++) {
          for (int k = 0; k < 10; k++) {
            dp[i + 1][(k * mul + j) % 13] += dp[i][j];
            dp[i + 1][(k * mul + j) % 13] %= mod;
          }
        }
      } else {
        int c = s[n - (i+1)] - '0';
        for (int j = 0; j < 13; j++) {
          dp[i + 1][(c * mul + j) % 13] += dp[i][j];
          dp[i + 1][(c * mul + j) % 13] %= mod;
        }
      }

      for (int j = 0; j < 13; j++) {
        dp[i+1][j] %= mod;
      }

      mul *= 10;
      mul %= 13;
  }
  
  long long int res = dp[n][5];
  cout << res << endl;

  return 0;
}