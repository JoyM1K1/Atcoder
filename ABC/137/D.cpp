#include <bits/stdc++.h>
#define REP(i, N) for (ll i = 0; i < (N); ++i)
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
  vector<vector<ll>> v(1e5+1);
  REP(i, N) {
    ll a, b;
    cin >> a >> b;
    v[a].PB(b);
  }
  ll ans = 0;
  priority_queue<ll> pq;
  for (ll i = 1; i <= M; i++) {
    for (auto e : v[i]) pq.push(e);
    if (pq.size() != 0) {
      ans += pq.top();
      pq.pop();
    }
  }
  cout << ans << '\n';
}
