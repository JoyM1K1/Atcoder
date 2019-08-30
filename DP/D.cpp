#include <bits/stdc++.h>
#define REP(i, N) for (int i = 0; i < (N); i++)
#define REPR(i, N) for (int i = (N)-1; i >= 0; i--)
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
  ll dp[W + 1];
  REP(i, W + 1) { dp[i] = -1; }
  dp[0] = 0;
  ll M = 0;
  REP(i, N) {
    REPR(j, M + 1) {
      if (dp[j] == -1)
        continue;
      if (j + w[i] <= W) {
        dp[j + w[i]] = max(dp[j + w[i]], dp[j] + v[i]);
        M = max(M, j + w[i]);
      }
    }
  }
  REP(i, M) { std::cout << dp[i] << ' '; }
  std::cout << '\n';
  sort(dp, dp + W + 1, greater<ll>());
  std::cout << dp[0] << '\n';
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
