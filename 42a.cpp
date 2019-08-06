#include <iostream>
#include <string>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  
  if (a == 5) {
    if (b == 5 && c == 7) {
      cout << "YES" << endl;
      return 0;
    } else if (b == 7 && c == 5) {
      cout << "YES" << endl;
      return 0;
    } else {
      cout << "NO" << endl;
    }
  } else if (a == 7) {
    if (b == 5 && c == 5) {
      cout << "YES" << endl;
      return 0;
    } else {
      cout << "NO" << endl;
    }
  } else {
    cout << "NO" << endl;
  }
}