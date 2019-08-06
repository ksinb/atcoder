#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  int n;
  int d[110];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> d[i];
  }

  int num[110] = { 0 };
  for (int i = 0; i < n; i++) {
    num[d[i]]++;
  }

  int res = 0;
  for (int i = 1; i <= 100; i++) {
    if (num[i]) {
      res++;
    }
  }
  cout << res << endl;
  return 0;
}