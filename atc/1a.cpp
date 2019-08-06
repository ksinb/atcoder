#include <iostream>
#include <string>
using namespace std;

int h, w;
int sh, sw;
int gh, gw;
string ans = "No";
char b[510][510];
bool visited[510][510];

void dfs(int x, int y) {
  if (x < 0 || h <= x || y < 0 || w <= y || b[x][y] == '#') {
    return;
  }
  if (visited[x][y]) {
    return;
  }

  visited[x][y] = true;

  dfs(x + 1, y);
  dfs(x - 1, y);
  dfs(x, y + 1);
  dfs(x, y - 1);
  return;
}

int main()
{
  cin >> h >> w;

  for (int i = 0; i < h; i++)
  {
    for (int k = 0; k < w; k++)
    {
      cin >> b[i][k];
      visited[i][k] = false;
      if (b[i][k] == 's')
      {
        sh = i;
        sw = k;
      } else if (b[i][k] == 'g') {
        gh = i;
        gw = k;
      }
    }
  }

  dfs(sh, sw);

  if (visited[gh][gw]) {
    ans = "Yes";
  }
  cout << ans << endl;
  return 0;
}