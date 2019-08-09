#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int Q;
const int N = 100100;
int l[N], r[N];
vector<int> prime(N, 1);
vector<int> a(N, 0);
vector<int> res(N + 1, 0);

int main()
{
  cin >> Q;
  for (int i = 0; i < Q; i++)
  {
    cin >> l[i] >> r[i];
  }

  prime[0] = 0;
  prime[1] = 0;
  for (int i = 2; i < N; i++)
  {
    if (prime[i] == 0)
    {
      continue;
    }
    for (int j = i * 2; j < N; j += i)
    {
      prime[j] = 0;
    }
  }

  for (int i = 0; i < N; i++)
  {
    if (prime[i] && prime[(i + 1) / 2])
    {
      a[i] = 1;
    }
  }

  for (int i = 0; i < N; i++)
  {
    res[i + 1] = res[i] + a[i];
  }

  for (int i = 0; i < Q; i++)
  {
    cout << res[r[i] + 1] - res[l[i]] << endl;
  }

  return 0;
}