#include <iostream>

using namespace std;
int N, Q;
const int MX = 60;
int d[MX][MX];
int s[MX][MX];
long long p;
long long val[MX * MX];

int main()
{
  cin >> N;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> d[i][j];
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      s[i + 1][j + 1] = s[i][j + 1] + s[i + 1][j] - s[i][j] + d[i][j];
    }
  }

  for (int x1 = 0; x1 < N; x1++) {
    for (int x2 = x1 + 1; x2 <= N; x2++) {
      for (int y1 = 0; y1 < N; y1++) {
        for (int y2 = y1 + 1; y2 <= N; y2++) {
          long long area = (x2 - x1) * (y2 - y1);
          long long sum = s[x2][y2] - s[x1][y2] - s[x2][y1] + s[x1][y1];
          val[area] = std::max(val[area], sum);
        }
      }
    }
  }

  for (int i = 0; i < N * N; i++) {
    val[i + 1] = std::max(val[i + 1], val[i]);
  }

  cin >> Q;
  for (int i = 0; i < Q; i++) {
    cin >> p;
    cout << val[p] << endl;
  }
  return 0;
}