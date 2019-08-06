#include <iostream>
#include <string>
#include <queue>
using namespace std;

typedef pair<int, int> P;

int h, w;
int sy, sx;
int gy, gx;

char map[510][510];
int d[510][510];

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int bfs()
{
  queue<P> que;

  que.push(P(sy, sx));
  d[sy][sx] = 0;

  while (que.size()) {
    P p = que.front();
    que.pop();

    if (p.first == gy && p.second == gx) {
      break;
    }
    for (int i = 0; i < 4; i++)
    {
      int ny = p.first + dy[i];
      int nx = p.second + dx[i];
      if (0 <= nx && nx < w && 0 <= ny && ny < h && map[ny][nx] != '#' && d[ny][nx] == 10000) {
        que.push(P(ny, nx));
        d[ny][nx] = d[p.first][p.second] + 1;
      }
    }
  }

  return d[gy][gx];
}

int main()
{
  cin >> h >> w;
  cin >> sy >> sx;
  cin >> gy >> gx;

  sy--;
  sx--;
  gy--;
  gx--;
  for (int i = 0; i < h; i++)
  {
    for (int k = 0; k < w; k++)
    {
      cin >> map[i][k];
      d[i][k] = 10000;
    }
  }

  bfs();

  cout << d[gy][gx] << endl;
  return 0;
}