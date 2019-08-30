#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

int main() {
  ll N, K;
  std::cin >> N >> K;
  ll max_1 = N / K;
  ll max_2 = (N + K / 2) / K;

  if (K % 2 > 0) {
    std::cout << max_1 * max_1 * max_1 << '\n';
  } else {
    std::cout << max_1 * max_1 * max_1 + max_2 * max_2 * max_2 << '\n';
  }
}
