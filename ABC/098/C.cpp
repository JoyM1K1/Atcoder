#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }
ll div_ceil(ll, ll);

int main() {
  ll N;
  std::cin >> N;
  string S;
  std::cin >> S;
  std::vector<ll> W(N), E(N);
  REP(i, N) {
    if (S.at(i) == 'W') {
      W.at(i)++;
    } else {
      E.at(i)++;
    }
    if (i != N - 1) {
      W.at(i + 1) = W.at(i);
      E.at(i + 1) = E.at(i);
    }
  }
  ll min_ = N;
  REP(i, N) {
    ll count;
    if (i == 0) {
      count = E.at(N - 1);
    } else if (i == N - 1) {
      count = W.at(N - 2);
    } else {
      count = W.at(i - 1) + (E.at(N - 1) - E.at(i));
    }
    min_ = min(min_, count);
  }
  std::cout << min_ << '\n';
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
