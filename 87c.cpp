#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  int n, y;
  cin >> n;
  int a[2][110];
  for (int i = 0; i < n; i++) {
    cin >> a[0][i];
  }
  for (int i = 0; i < n; i++) {
    cin >> a[1][i];
  }

  int res = 0;
  for (int i = 0; i < n; i++) {
    int temp = 0;
    int j = 0;
    
    for (j = 0; j < i; j++) {
      temp += a[0][j];
    }
    temp += a[0][j];
    for (j = i; j < n; j++) {
      temp += a[1][j];
    }

    if (temp > res) {
      res = temp;
    }
  }
  cout << res << endl;
  return 0;
}
