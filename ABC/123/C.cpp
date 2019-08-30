#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define ALL(x) (x).begin(), (x).end()
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

int main() {
  ll N;
  cin >> N;
  vector<ll> A(5);
  REP(i, 5) { std::cin >> A.at(i); }
  ll min_ = A.at(4);
  REP(i, 4) {
    if (A.at(i) < min_) {
      min_ = A.at(i);
    }
  }
  ll time = 4;
  if (N % min_ > 0) {
    time += N / min_ + 1;
  } else {
    time += N / min_;
  }

  std::cout << time << '\n';
}
