#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[110];
  
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int alice = 0;
  int bob = 0;
  sort(a, a+n, greater<int>());
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      alice += a[i];
    } else {
      bob += a[i];
    }
  }

  cout << alice - bob << endl;
  return 0;
}