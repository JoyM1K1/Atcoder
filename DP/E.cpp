#include <bits/stdc++.h>
#define REP(i, N) for (ll i = 0; i < (N); i++)
#define REPR(i, N) for (ll i = (N)-1; i >= 0; i--)
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
  ll N, W;
  std::cin >> N >> W;
  ll w[N];
  ll v[N];
  REP(i, N) { std::cin >> w[i] >> v[i]; }
  ll dp[100001];
  REP(i, 100001) { dp[i] = -1; }
  dp[0] = 0;
  ll M = 0;
  REP(i, N) {
    REPR(j, M + 1) {
      if (dp[j] == -1)
        continue;
      if (dp[j + v[i]] == -1) {
        dp[j + v[i]] = w[i] + dp[j];
      } else {
        dp[j + v[i]] = min(dp[j + v[i]], dp[j] + w[i]);
      }
      M = max(M, j + v[i]);
    }
  }
  ll ans = 0;
  REPR(i, M + 1) {
    if (dp[i] <= W && dp[i] != -1) {
      ans = max(ans, i);
    }
  }
  // std::cout << M << '\n';
  std::cout << ans << '\n';
  // REP(i, M + 1) { std::cout << dp[i] << ' '; }
  // std::cout << '\n';
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
