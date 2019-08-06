#include <iostream>
#include <string>
using namespace std;


int main() {
  string s;
  cin >> s;

  int res = 0;
  int n = s.size();
  for (int i = 0; i < (1 << n-1); i++) {
    int temp = 0;
    for (int j = 0; j < n-1; j++) {
      temp *= 10;
      temp += (s[i]) - '0';
      if (i & (1 << j) == 0) {
        res += temp;
        temp = 0;
      }
    }
    res += temp;
  }

  cout << res << endl;
  return 0;
}