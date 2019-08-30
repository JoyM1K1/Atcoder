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
  ll N, K;
  cin >> N >> K;
  ll A[N];
  ll sum = 0;
  ll _max = 0;
  REP(i, N) {
    cin >> A[i];
    sum += A[i];
    _max = max(_max, A[i])
  }
  sort(A, A + N);
  vactor<ll> v;
  for (int i = 1; i * i < sum) {
    if (sum % i == 0) {
      v.PB(i);
      v.PB(sum / i);
    }
  }
  sort(ALL(v));
  REP(i, v.size()) {
    ll r[N];
    REP(j, N) r[j] = A[j] % v[i];
    sort(r, r + N);
    ll cs[N] = {}; // 累積和 Cumulative sum
    REP(j, N) cs[j] += r[j];
    REP(j, N) {}
  }
}
