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
  ll N, M;
  cin >> N >> M;
  pair<ll, ll> v[N];
  REP(i, N) cin >> v[i].first >> v[i].second;
  // REP(i, N) v[i].second = -v[i].second;
  sort(v, v + N);
  reverse(v, v + N);
  ll id = 0;
  ll ans = 0;
  ll dp[M];
  // cout << '\n';
  // REP(i, N) cout << v[i].first << ' ' << v[i].second << '\n';
  for (int i = M; i > 0; i--) {
    while (v[id].second > i && id < N - 1)
      id++;
    if (v[id].second <= i) {
      ans += v[id].first;
    }
    id++;
  }
  cout << ans << '\n';
}
