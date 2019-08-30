#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define ALL(x) (x).begin(), (x).end()
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

int main() {
  ll N;
  cin >> N;
  vector<ll> B(N);
  REP(i, N) {
    ll A;
    cin >> A;
    B.at(i) = A - (i + 1);
  }
  sort(ALL(B));
  ll median;
  ll sad = 0;
  ll sad1 = 0;
  ll sad2 = 0;
  if (N % 2 > 0) {
    median = B.at(N / 2 + 1);
    REP(i, N) { sad += abs(B.at(i) - median); }
    std::cout << sad << '\n';
  } else {
    median = (B.at(N / 2) + B.at(N / 2 + 1)) / 2;
    REP(i, N) {
      sad1 += abs(B.at(i) - median);
      sad2 += abs(B.at(i) - (median + 1));
    }
    std::cout << min(sad1, sad2) << '\n';
  }
}
