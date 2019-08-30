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
  string S[H];
  REP(i, H) { std::cin >> S[i]; }
  ll dp[H + 2][W + 2];
  REP(i, H + 2) {
    REP(j, W + 2) {
      if (i == 0 || i == H + 1 || j == 0 || j == W + 1) {
        dp[i][j] = -1;
      } else if (S[i - 1][j - 1] == '#') {
        dp[i][j] = -1;
      }
    }
  }
  REP(i, H) { REP(j) }
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
