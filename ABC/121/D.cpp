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
void count(ll N, vector<int> &v) {
  for (ll i = 1; i <= N; i *= 2) {
    ll c;
    if (i == 1) {
      c = N % 4;
      if (c == 0 || c == 1) v.PB(0);
      else v.PB(1);
      continue;
    }
    c = N % (i * 2);
    if (c <= i) v.PB(0);
    else v.PB(c % 2);
  }
}

int main() {
  ll A, B;
  cin >> A >> B;
  vector<int> a, b;
  count(A, a);
  count(B + 1, b);
  ll na = a.size();
  ll nb = b.size();
  REP(i, nb - na) a.PB(0);
  // REP(i, a.size()) {
  //   cout << a[i] << ' ';
  // }
  // cout << '\n';
  // REP(i, b.size()) {
  //   cout << b[i] << ' ';
  // }
  // cout << '\n';
  ll ans = 0;
  ll k = 1;
  REP(i, b.size()) {
    ans += ((a[i] + b[i]) % 2) * k;
    k *= 2;
  }
  cout << ans << '\n';
}
