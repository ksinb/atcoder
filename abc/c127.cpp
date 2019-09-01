#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

vector<int> res;

int main() {
  int n, m;
  cin >> n >> m;
  vector<long long int> l, r;
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    l.push_back(a);
    r.push_back(b);
  }
  
  long long int left = *max_element(l.begin(), l.end());
  long long int right = *min_element(r.begin(), r.end());
  long long temp = right - left + 1;

  long long int res;
  if (temp <= 0) {
    res = 0;
  } else if (n <= temp) {
    res = n;
  } else {
    res = temp;
  }
  
  cout << res << endl;
  return 0;
}
