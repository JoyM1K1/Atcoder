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
  ll N;
  std::cin >> N;
  ll a[N][3];
  REP(i, N) {
    REP(j, 3) { std::cin >> a[i][j]; }
  }
  ll dp[N][3] = {0};
  REP(i, 3) { dp[0][i] = a[0][i]; }
  REP(i, N) {
    if (i > 0) {
      REP(j, 3) {
        REP(k, 3) {
          if (j != k) {
            dp[i][j] = max(dp[i][j], dp[i - 1][k] + a[i][j]);
          }
        }
      }
    }
  }
  ll ans = 0;
  REP(i, 3) { ans = max(ans, dp[N - 1][i]); }
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
