#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  int n, y;
  cin >> n >> y;

  int res = 0;
  int a = -1;
  int b = -1;
  int c = -1;
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= n - i; j++) {
      if (10000*i + 5000*j + 1000*(n-i-j) == y) {
        a = i;
        b = j;
        c = n-i-j;
      }
    }
  }
  cout << a << " " << b << " " << c << endl;
  return 0;
}