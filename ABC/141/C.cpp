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
  ll N, K, Q;
  cin >> N >> K >> Q;
  ll count[N] = {};
  REP(i, Q) {
    ll a;
    cin >> a;
    a--;
    count[a]++;
  }
  ll l[N] = {}, r[N] = {};
  l[0] = count[0];
  r[N-1] = count[N-1];
  REP(i, N-1) l[i+1] = l[i] + count[i+1];
  for (int i = N-1; i >= 1; i--) r[i-1] = r[i] + count[i - 1];
  REP(i, N) {
    string ans;
    if (i == 0) {
      if (r[1] >= K) ans = "No";
      else ans = "Yes";
      cout << ans << '\n';
      continue;
    }
    if (i == N-1) {
      if (l[N-2] >= K) ans = "No";
      else ans = "Yes";
      cout << ans << '\n';
      continue;
    }
    if (l[i-1]+r[i+1] >= K) ans = "No";
    else ans = "Yes";
    cout << ans << '\n';
  }
  // REP(i, N) cout << l[i] << ' ';
  // cout << '\n';
  // REP(i, N) cout << r[i] << ' ';
  // cout << '\n';
}
