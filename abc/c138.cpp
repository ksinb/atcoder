#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

vector<int> v;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    v.push_back(c);
  }
  std::sort(v.begin(), v.end());
    
  long double prev = (v[0] + v[1]) / 2.0;
  long double res = prev;
  // cout << res << endl;
  for (int i = 2; i < n; i++) {
    // cout << "prev: " << prev << "a: " << v[i] << endl;
    prev = (prev + v[i]) / 2.0;
    // cout << "update prev: " << prev << endl;
    // res += prev;
    // cout << "res: " << res << endl;
// 
  }
  cout << prev << endl;
  return 0;
}

