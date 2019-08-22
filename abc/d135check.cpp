#include <bits/stdc++.h>
#include<iomanip>
using namespace std;

const long long int mod = 1000000007;

int main() {
  string s = "6348";
  int dp[100100][13];
  dp[0][0] = 1;


  int mul = 1;
  int n = s.length();
  cout << n << endl;
  for (int i = 0; i < n; i++) {
   {
      int c = (int)(s[n - (i+1)] - '0');
      for (int j = 0; j < 13; j++) {
        int t = (c * mul + j) % 13;
        dp[i + 1][(c * mul + j) % 13] += dp[i][j];
        
        if (dp[i][j] != 0) {
          printf("dp[%d + 1][(%d * %d + %d) %% 13 = %d] += dp[%d][%d] (%d)\n", i, c, mul, j, (c*mul+j)%13, i, j, dp[i][j]);
        }
      }

      mul *= 10;
    }
  }
  cout << dp[n][4] << endl;
  cout << stoi(s) % 13 << endl;
  return 0;
}