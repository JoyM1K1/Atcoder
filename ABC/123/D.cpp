#include <bits/stdc++.h>
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

int main() {
  ll X, Y, Z, K;
  cin >> X >> Y >> Z >> K;
  ll A[X], B[Y], C[Z];
  REP(i, X) cin >> A[i];
  REP(i, Y) cin >> B[i];
  REP(i, Z) cin >> C[i];
  vector<ll> v;
  REP(i, X) REP(j, Y) {
    v.PB(A[i] + B[j]);
  }
  sort(ALL(v));
  reverse(ALL(v));
  v.resize(K);
  vector<ll> ans;
  REP(i, Z) REP(j, K) {
    ans.PB(C[i] + v[j]);
  }
  sort(ALL(ans));
  reverse(ALL(ans));
  REP(i, K) cout << ans[i] << '\n';
}
