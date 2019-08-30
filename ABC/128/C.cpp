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
  int N, M;
  std::cin >> N >> M;
  std::vector<std::vector<int>> s(M, std::vector<int>(N));
  REP(i, M) {
    int k;
    std::cin >> k;
    REP(j, k) {
      int a;
      std::cin >> a;
      s[i][a - 1] = 1;
    }
  }
  std::vector<int> p(M);
  REP(i, M) { std::cin >> p[i]; }
  // REP(i, M) {
  //   REP(j, N) { std::cout << s[i][j] << ' '; }
  //   std::cout << '\n';
  // }
  int count = 0;
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
