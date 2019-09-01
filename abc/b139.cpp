#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int sum = a;
  int count = 1;

  if (b == 1){
    cout << 0 << endl;
    return 0;
  }

  while (true) {
    if (sum >= b) {
      break;
    }
    sum += a;
    sum--;
    count += 1;
  }
  cout << count << endl;
  return 0;
}