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
  ll N, M;
  std::cin >> N >> M;
  ll a[M];
  REP(i, M) std::cin >> a[i];
  bool NG = false;
  REP(i, M - 1) {
    if (a[i] == a[i + 1]) {
      NG = true;
    }
  }
  if (NG) {
    std::cout << 0 << '\n';
  } else {
    ll dp[N + 2];
    dp[0] = 0;
    dp[1] = 1;
    REP(i, M) dp[a[i] + 1] = -1;
    REP(i, N + 2) {
      if (i > 1) {
        if (dp[i] == -1) {
          dp[i] = 0;
        } else {
          dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
        }
      }
    }
    std::cout << dp[N + 1] << '\n';
  }
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
