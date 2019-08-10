#include <iostream>

using namespace std;

int N;
long long int h[100100];

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> h[i];
  }
  long long int ans = h[N-1];
  for (int i = N-1; i >= 0; i--) {
    if (h[i] -1 > ans) {
      cout << "No" << endl;
      return 0;
    }
    ans = std::min(h[i], ans);
  }
  cout << "Yes" << endl;
  return 0;
}
