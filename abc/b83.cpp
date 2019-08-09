#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, a, b;
  int count = 0;
  cin >> n >> a >> b;

  for (int i = 1; i <= n; i++) {
    int c = i;
    int res = 0;
    while (c > 0) {
      res += c % 10;
      c /= 10;
    }
    if (a <= res && res <= b) {
      count += i;
    }
  }

  cout << count << endl;
  return 0;
}