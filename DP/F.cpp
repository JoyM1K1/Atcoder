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
  string s, t;
  std::cin >> s >> t;
  int Ns = s.size();
  int Nt = t.size();
  int dp[Ns + 1][Nt + 1] = {};
  REP(i, Ns) {
    REP(j, Nt) {
      if (s[i] == t[j]) {
        dp[i + 1][j + 1] = dp[i][j] + 1;
      } else {
        dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
      }
    }
  }
  string ans = "";
  int x = Ns;
  int y = Nt;
  while (x > 0 && y > 0) {
    if (dp[x][y] == dp[x - 1][y]) {
      x--;
    } else if (dp[x][y] == dp[x][y - 1]) {
      y--;
    } else {
      x--;
      y--;
      ans = s[x] + ans;
    }
  }
  std::cout << ans << '\n';
  // REP(i, Ns + 1) {
  //   REP(j, Nt + 1) { std::cout << dp[i][j] << ' '; }
  //   std::cout << '\n';
  // }
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
