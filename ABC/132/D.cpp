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

ll factrial(ll n) { // n!
  if (n == 0)
    return 1;
  ll fact = 1;
  for (int i = n; i > 1; i--) {
    fact *= i;
  }
  return fact;
}

ll Com(ll n, ll m) { // nCm
  if (m == 0 || n == m)
    return 1;
  if (m > n / 2)
    m = n - m;
  ll d = 1;
  ll e = factrial(m);
  for (int i = n; i > n - m; i--) {
    d *= i;
  }
  return d / e;
}

int main() {
  ll N, K;
  cin >> N >> K;
  for (int i = 1; i <= K; i++) {
    ll a = Com(K - 1, i - 1) % MOD;
    ll b = Com(N - K + 1, i) % MOD;
    cout << (a * b) % MOD << '\n';
  }
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
