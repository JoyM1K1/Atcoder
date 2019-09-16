#include <bits/stdc++.h>
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

//++時計回り --反時計回り
// int dx[4] = {1, 0, -1, 0};
// int dy[4] = {0, 1, 0, -1};

int main() {
  int H, W;
  cin >> H >> W;
  string S[H];
  REP(i, H) cin >> S[i];
  int l[H+2][W+2] = {};
  int r[H+2][W+2] = {};
  int t[H+2][W+2] = {};
  int b[H+2][W+2] = {};
  REP(i, H) {
    int count = 0;
    REP(j, W) {
      if (S[i][j] == '.') {
        count++;
        l[i+1][j+1] = count;
      } else {
        count = 0;
      }
    }
  }
  REP(i, H) {
    int count = 0;
    for (int j = W - 1; j >= 0; j--) {
      if (S[i][j] == '.') {
        count++;
        r[i+1][j+1] = count;
      } else {
        count = 0;
      }
    }
  }
  REP(i, W) {
    int count = 0;
    for (int j = 0; j < H; j++) {
      if (S[j][i] == '.') {
        count++;
        t[j+1][i+1] = count;
      } else {
        count = 0;
      }
    }
  }
  REP(i, W) {
    int count = 0;
    for (int j = H - 1; j >= 0; j--) {
      if (S[j][i] == '.') {
        count++;
        b[j+1][i+1] = count;
      } else {
        count = 0;
      }
    }
  }
  int ans = 0;
  for (int i = 1; i <= H; i++) for (int j = 1; j <= W; j++) {
    if (S[i-1][j-1] == '.')
      ans = max(ans, l[i][j-1] + r[i][j+1] + t[i-1][j] + b[i+1][j] + 1);
  }
  cout << ans << '\n';
}
