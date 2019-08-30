#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }
ll div_ceil(ll, ll);

int main() {
  ll H, W, N;
  std::cin >> H >> W >> N;
  std::vector<ll> s(2);
  std::cin >> s.at(0) >> s.at(1);
  string S, T;
  std::cin >> S >> T;
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
