#include <iostream>
#include <string>
using namespace std;

int main() {
  int k, s;
  cin >> k >> s;
  
  int count = 0;
  for (int i = 0; i <= k; i++) {
    for (int j = 0; j <= k; j++) {
      if (0 <= s-i-j && s-i-j <= k) {
        count += 1;
      }
    }
  }

  cout << count << endl;
  return 0;
}