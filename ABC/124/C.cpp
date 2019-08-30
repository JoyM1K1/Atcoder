#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }
ll div_ceil(ll, ll);

int main() {
  string S;
  std::cin >> S;
  int N = S.size();
  std::vector<int> v(N), b(N), w(N);
  REP(i, N) {
    if (S.at(i) == '0') {
      v.at(i) = 0;
    } else {
      v.at(i) = 1;
    }
    if (i % 2 == 0) {
      b.at(i) = 0;
      w.at(i) = 1;
    } else {
      b.at(i) = 1;
      w.at(i) = 0;
    }
  }
  ll b_count = 0, w_count = 0;
  REP(i, N) {
    if (v.at(i) != b.at(i)) {
      b_count++;
    }
    if (v.at(i) != w.at(i)) {
      w_count++;
    }
  }
  std::cout << min(b_count, w_count) << '\n';
  // REP(i, N) { std::cout << b.at(i) << '\n'; }
  // REP(i, N) { std::cout << w.at(i) << '\n'; }
  // REP(i, N) { std::cout << v.at(i) << '\n'; }
  // std::cout << b_count << w_count << '\n';
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
