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
  string S;
  cin >> S;
  int N = S.size();
  ll dp[N+1][13] = {};
  dp[0][0] = 1;
  REP(i, N) {
    int c = S[i] == '?' ? -1 : S[i] - '0';
    REP(j, 10) {
      if (c != -1 && c != j) continue;
      REP(k, 13) {
        dp[i+1][(k*10+j) % 13] += dp[i][k];
      }
    }
    REP(j, 13) dp[i+1][j] %= MOD;
  }
  cout << dp[N][5] << '\n';
}
