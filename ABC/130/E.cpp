#include <bits/stdc++.h>
#define REP(i, N) for (ll i = 0; i < (N); ++i)
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
  ll N, M;
  std::cin >> N >> M;
  ll S[N];
  ll T[M];
  REP(i, N) { std::cin >> S[i]; }
  REP(i, M) { std::cin >> T[i]; }
  ll dp[N + 1][M + 1] = {};
  ll sum[N + 1][M + 1] = {};
  ll ans = 1;
  REP(i, N) REP(j, M) {
    if (S[i] == T[j]) {
      dp[i + 1][j + 1] = sum[i][j] + 1;
      ans += dp[i + 1][j + 1] % MOD;
    }
    sum[i + 1][j + 1] =
        (sum[i + 1][j] + sum[i][j + 1] - sum[i][j] + dp[i + 1][j + 1] + MOD) %
        MOD;
  }

  std::cout << ans % MOD << '\n';
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
