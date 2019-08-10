#include <iostream>
using namespace std;

int A, B, C;
int main() {
  cin >> A >> B >> C;
  if (C - (A - B) > 0) {
    cout << C - (A - B) << endl;
  } else {
    cout << 0 << endl;
  }
}