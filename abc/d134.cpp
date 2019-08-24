#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

vector<int> res;

int main() {
  int n;
  cin >> n;

  int a[n+1];
  int b[n+1];
  a[0] = 0;
  b[0] = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i+1];
    b[i+1] = 0;
  }

  int sum;
  for (int i = n; i > 0; i--) {
    sum = 0;
    for (int j = i + i; j <= n; j += i) {
      sum = sum ^ b[j];
    }

    b[i] = sum ^ a[i]; 
  }

  for (int i = 1; i <= n; i++) {
    if (b[i]) {
      res.push_back(i);
    }
  }

  cout << res.size() << endl;
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << " ";
  }
  return 0;
}
