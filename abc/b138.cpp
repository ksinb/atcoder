#include <bits/stdc++.h>
#include<iomanip>
using namespace std;

int a[1010];

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  long double res = 0;
  long double sum = 0;

  for (int i = 0; i < n; i++) {
    sum += (long double)1.0 / a[i];
  }
  res = 1 / sum;
  cout << std::setprecision(16) << res << endl;
  return 0;
}

