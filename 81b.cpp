#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  int count = 0;
  bool cond = false;
  int A[210];
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  
  while (true) {
    cond = false;
    for(int i = 0; i < n; i++ ) {
      if (A[i] % 2 != 0) {
        cond = true;
        break;
      }
    }

    if (cond) {
      break;
    }

    for(int i = 0; i < n; i++ ) {
      A[i] /= 2;
    }
    count++;
  }

  cout << count << endl;
  return 0;
}