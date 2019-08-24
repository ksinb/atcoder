#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

vector<int> a;
vector<int> b;
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    a.push_back(c);
    b.push_back(c);
  }

  auto max_it = std::max_element(a.begin(), a.end());
  int m = *max_it;
  int max_count = std::count(a.begin(), a.end(), m);

  sort(b.begin(), b.end());
  b.pop_back();
  auto second_it = std::max_element(b.begin(), b.end());
  int second = *second_it;
  
  for (int i = 0; i < n; i++) {
    if (a[i] != m) {
      cout << m << endl;
    } else {
      if (max_count > 1) {
        cout << m << endl;
      } else {
        cout << second << endl;
      }
    }
  }
  return 0;
}