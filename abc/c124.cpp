#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  // 010101...
  int ans0 = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (i % 2 == 0 && s[i] == '0') {
      ans0 += 1;
    } else if (i % 2 == 1 && s[i] == '1') {
      ans0 += 1;
    }
  }

  // 1010101...
  int ans1 = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (i % 2 == 1 && s[i] == '0')
    {
      ans1 += 1;
    }
    else if (i % 2 == 0 && s[i] == '1')
    {
      ans1 += 1;
    }
  }

  cout << min(ans0, ans1) << endl;
  return 0;
}