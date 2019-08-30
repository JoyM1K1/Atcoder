#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define ALL(x) (x).begin(), (x).end()
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

int main() {
  ll N, K;
  std::cin >> N >> K;
  vector<ll> x(N);
  REP(i, N) { std::cin >> x.at(i); }
  ll min_ = 100000000;
  REP(i, N - K + 1) {
    ll left = x.at(i);
    ll right = x.at(i + K - 1);
    ll distance = abs(left - right);
    ll ltor = abs(left) + distance;
    ll rtol = abs(right) + distance;
    if (ltor < min_) {
      min_ = ltor;
    }
    if (rtol < min_) {
      min_ = rtol;
    }
  }
  std::cout << min_ << '\n';
}
