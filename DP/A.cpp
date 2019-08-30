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
  ll h[N];
  REP(i, N) std::cin >> h[i];
  ll dp[N] = {0};
  dp[1] = abs(h[1] - h[0]);
  REP(i, N) {
    if (i > 1) {
      ll one = abs(h[i] - h[i - 1]);
      ll two = abs(h[i] - h[i - 2]);
      dp[i] = min(dp[i - 1] + one, dp[i - 2] + two);
    }
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
