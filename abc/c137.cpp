#include <iostream>
#include <string>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int N;
const int INT_MAX = 100100;
string s[INT_MAX];
std::set<string> c;
std::map<std::string, long long int> res;

int main()
{

  cin >> N;
  long long int ans = 0;

  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    std::sort(s.begin(), s.end());

    if (res.find(s) == res.end()) { // not found
      res.insert(std::make_pair(s, 0));
    } else {
      res[s]++;
    }
  }
  
  for(auto itr = res.begin(); itr != res.end(); ++itr) {
    if (itr->second != 0) {
      long long int temp = itr->second * ( itr->second + 1) / 2;
      ans += temp;
    } else if (itr->second == 1) {
      ans += 1;
    }
  }

  cout << ans << endl;
  return 0;
}