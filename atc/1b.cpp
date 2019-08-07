#include <iostream>
using namespace std;

long long N, Q;
const long long MAX_N = 100100;
long long p[200000];
long long a[200000];
long long b[200000];

long par[MAX_N];
void init(long long n) {
  for (long long i = 0; i < n; i++) {
    par[i] = i;
  }
}

// find root
long long root(long long x) {
  if (par[x] == x) {
    // root
    return x;
  } else {
    return par[x] = root(par[x]);
  }
}

bool same(long long x, long long y) {
  return root(x) == root(y);
}

void unite(long long x, long long y) {
  int rx = root(x);
  int ry = root(y);
  if (rx == ry) {
    return;
  }
  par[rx] = ry;
}

int main()
{
  cin >> N >> Q;

  for (long long i = 0; i < Q; i++) {
    cin >> p[i] >> a[i] >> b[i];
  }

  init(N+1);

  for (long long i = 0; i < Q; i++)
  {
    if (p[i] == 0) {
      unite(a[i], b[i]);;
    } else {
      if (same(a[i], b[i])) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }

  return 0;
}
