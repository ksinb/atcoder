#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

vector<int> res;

int main() {
  int l, r;
  cin >> l >> r;
  
  r = min(r, l + 2019*2);
  long long int minV = 2018;
  for (long long int i = l; i <= r; i++) {
    for (long long int j = i+1; j <= r; j++) {
      minV = min(minV, i * j % 2019);
    }
  }

  cout << minV << endl;
  return 0;
}
