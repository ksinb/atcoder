#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, Q;
string s;
const int MAX_N = 100100;
int res[MAX_N];
int l;
int r;


int main()
{
  cin >> N >> Q;
  cin >> s;

  for (int i = 0; i < N; i++) {
    if (i + 1 < N && s[i] == 'A' && s[i + 1] == 'C') {
      res[i + 1] = res[i] + 1;
    }
    else
    {
      res[i + 1] = res[i];
    }
  }

    for (int i = 0; i < Q; i++)
    {
      cin >> l >> r;
      l--;
      r--;
      cout << res[r] - res[l] << endl;
    }

    return 0;
}