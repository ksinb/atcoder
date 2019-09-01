#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;

  int h[n];
  int d[n];
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }

  long long int ans = 0;
  long long int tmp = 0;
  for (int i = 1; i < n; i++) {
    if (h[i-1] - h[i] >= 0) {
      tmp++;
    } else {
      ans = max(tmp, ans);
      tmp = 0;
    }
  }
  ans = max(tmp, ans);

  cout << ans << endl;
  return 0;
}