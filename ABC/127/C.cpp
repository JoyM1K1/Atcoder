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
  ll N, M;
  std::cin >> N >> M;
  std::vector<ll> L(M);
  std::vector<ll> R(M);
  REP(i, M) { std::cin >> L[i] >> R[i]; }
  sort(ALL(L));
  reverse(ALL(L));
  sort(ALL(R));

  if (L[0] <= R[0]) {
    std::cout << R[0] - L[0] + 1 << '\n';
  } else {
    std::cout << 0 << '\n';
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
