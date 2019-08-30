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

ll ans[2000001] = {};
ll temp[2000001] = {};
vector<ll> v[2000001];

void dfs(ll id) {
  ans[id] += temp[id];
  REP(i, v[id].size()) {
    ans[v[id][i]] += ans[id];
    dfs(v[id][i]);
  }
}

int main() {
  ll N,Q;
  cin >> N >> Q;
  REP(i, N-1) {
    ll a,b;
    cin >> a >> b;
    a--;
    b--;
    v[a].PB(b);
  }

  REP(i, Q) {
    ll p,x;
    cin >> p >> x;
    p--;
    temp[p] += x;
  }
  dfs(0);

  REP(i, N) cout << ans[i] << (i < N-1 ? ' ': '\n');
}
