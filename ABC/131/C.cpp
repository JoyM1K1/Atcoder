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
  ll A, B, C, D;
  std::cin >> A >> B >> C >> D;
  ll N = B - (A - 1);
  ll GCD = gcd(C, D);
  ll LCM = C * D / GCD;
  ll AC = (A - 1) / C;
  ll AD = (A - 1) / D;
  ll ACD = (A - 1) / LCM;
  ll BC = B / C;
  ll BD = B / D;
  ll BCD = B / LCM;
  ll ans = N - ((BC - AC) + (BD - AD) - (BCD - ACD));
  cout << ans << '\n';
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
