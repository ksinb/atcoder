#include <bits/stdc++.h>
#include<iomanip>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<long long int> a, b;
  
  for (int i = 0; i <= n; i++) {
    int c;
    cin >> c;
    a.push_back(c);
  }

  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    b.push_back(c);
  }

  long long int res = 0;
  for (int i = 0; i < n; i++) {
    int left = min(a[i], b[i]);
    res += left;
    a[i] -= left;
    b[i] -= left;

    int right = min(a[i+1], b[i]);
    res += right;
    a[i+1] -= right;
    b[i] -= right;
  }

  cout << res << endl;

  return 0;
}
