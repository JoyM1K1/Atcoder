#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define ALL(x) (x).begin(), (x).end()
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

int main() {
  ll X, Y, Z, K;
  cin >> X >> Y >> Z >> K;
  vector<ll> A(X);
  vector<ll> B(Y);
  vector<ll> C(Z);
  REP(i, X) { std::cin >> A.at(i); }
  REP(i, Y) { std::cin >> B.at(i); }
  REP(i, Z) { std::cin >> C.at(i); }
  sort(ALL(A));
  sort(ALL(B));
  sort(ALL(C));
  reverse(ALL(A));
  reverse(ALL(B));
  reverse(ALL(C));

  vector<ll> A_sub(X);
  vector<ll> B_sub(Y);
  vector<ll> C_sub(Z);

  REP(i, X - 1) { A_sub.at(i + 1) = A.at(i) - A.at(i + 1); }
  REP(i, Y - 1) { B_sub.at(i + 1) = B.at(i) - B.at(i + 1); }
  REP(i, Z - 1) { C_sub.at(i + 1) = C.at(i) - C.at(i + 1); }

  vector<ll> sum;
  int count = 1;
  std::cout << A.at(0) + B.at(0) + C.at(0) << '\n';
  while (count < K) {
  }
}
