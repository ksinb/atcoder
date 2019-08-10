#include <iostream>

using namespace std;
int A, B;

int main()
{

  cin >> A >> B;
  int m = A + B;
  if (m < A * B) {
    m = A * B;
  }
  if (m < A - B) {
    m = A - B;
  }
  cout << m << endl;
  return 0;
}