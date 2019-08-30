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
  ll N, K;
  std::cin >> N >> K;
  ll h[N];
  REP(i, N) std::cin >> h[i];
  ll dp[N];
  REP(i, K) {
    if (i < N) {
      dp[i] = abs(h[i] - h[0]);
    } else {
      break;
    }
  }
  ll min_;
  REP(i, N - K) {
    REP(j, K) {
      if (j == 0) {
        min_ = dp[i] + abs(h[K + i] - h[i]);
      } else {
        min_ = min(min_, dp[i + j] + abs(h[K + i] - h[i + j]));
      }
    }
    dp[i + K] = min_;
  }
  std::cout << dp[N - 1] << '\n';
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
