#include <iostream>

using namespace std;
int K, X;

int main()
{

  cin >> K >> X;
  int l = X - K;
  int r = X + K;

  for (int i = l+1; i < r; i++) {
    cout << i << " ";
  }
  return 0;
}