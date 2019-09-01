#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
  int c = max(a, b);
  int d = min(b, a);
  if (d == 0) {
    return c;
  }
  return gcd(c % d, d);
}


int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<int> l(n);
  for (int i = 0; i < n-1; i++) {
    l[i+1] = gcd(l[i], a[i]);
  }

  vector<int> r(n);
  for (int i = n-1; i >= 1; i--) {
    r[i-1] = gcd(r[i], a[i]);
  }

  int ans = 1;
  for (int i = 0; i < n; i++) {
    ans = max(ans, gcd(l[i], r[i]));
  }

  cout << ans << endl;

  return 0;
}
