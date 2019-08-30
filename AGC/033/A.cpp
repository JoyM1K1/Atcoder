#include <bits/stdc++.h>
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }
ll div_ceil(ll, ll);

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int main() {
  int H, W;
  std::cin >> H >> W;
  std::vector<string> A(H);
  REP(i, H) { std::cin >> A[i]; }
  queue<pair<int, int>> que;
  std::vector<std::vector<int>> d(H, std::vector<int>(W, -1));
  REP(i, H) {
    REP(j, W) {
      if (A[i][j] == '#') {
        que.push(MP(i, j));
        d[i][j] = 0;
      }
    }
  }
  while (!que.empty()) {
    auto p = que.front();
    que.pop();
    REP(i, 4) {
      int gx = p.first + dx[i];
      int gy = p.second + dy[i];
      if (0 <= gx && gx < H && 0 <= gy && gy < W && d[gx][gy] == -1) {
        d[gx][gy] = d[p.first][p.second] + 1;
        que.push(MP(gx, gy));
      }
    }
  }
  int ans = 0;
  REP(i, H) {
    REP(j, W) { ans = max(ans, d[i][j]); }
  }
  std::cout << ans << '\n';
}

ll div_ceil(ll a, ll b) {
  ll quotient = a / b;
  ll remainder = a % b;
  if (remainder == 0) {
    return quotient;
  } else {
    return quotient + 1;
  }
}
