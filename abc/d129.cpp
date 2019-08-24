#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  char map[h+1][w+1];
  for (int i = 0; i < h; i++) {
    for (int j = 0;  j < w; j++) {
      char c;
      cin >> c;
      map[i+1][j+1] = c;
    }
  }
  
  vector<vector<int>> left(h+2, vector<int>(w+2, 0));
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      if (map[i][j] == '#') { 
        left[i][j] = 0;
      } else {
        left[i][j] = left[i][j-1] + 1;
      }
    }
  }

  vector<vector<int>> right(h+2, vector<int>(w+2, 0));
  for (int i = 1; i <= h; i++) {
    for (int j = w; j >= 1; j--) {
      if (map[i][j] == '#') { 
        right[i][j] = 0;
      } else {
        right[i][j] = right[i][j+1] + 1;
      }
    }
  }

  vector<vector<int>> up(h+2, vector<int>(w+2, 0));
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      if (map[i][j] == '#') { 
        up[i][j] = 0;
      } else {
        up[i][j] = up[i-1][j] + 1;
      }
    }
  }

  vector<vector<int>> down(h+2, vector<int>(w+2, 0));
  for (int i = h; i >= 1; i--) {
    for (int j = 1; j <= w; j++) {
      if (map[i][j] == '#') { 
        down[i][j] = 0;
      } else {
        down[i][j] = down[i+1][j] + 1;
      }
    }
  }

  int res = 0;
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      res = max(res, left[i][j] + right[i][j] + up[i][j] + down[i][j] - 3);
    }
  }
  
  cout << res << endl;
  return 0;
}
