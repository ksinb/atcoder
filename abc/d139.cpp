#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
 
 
int main() {
  int n;
  cin >> n;
 
  long long int ans = 0;
  for (int i = n-1; i >= 1; i--) {
    ans += i;
  }
  cout << ans << endl;
  return 0;
 
}