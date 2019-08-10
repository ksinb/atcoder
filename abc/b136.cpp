#include <iostream>
#include <string>
using namespace std;

int N, ans;
int main() {
  cin >> N;
  for (int i = 1; i <= N; i++) {
    if (std::to_string(i).size() % 2 != 0) {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
