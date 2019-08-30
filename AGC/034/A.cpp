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
  ll N, a, b, c, d;
  std::cin >> N >> a >> b >> c >> d;
  string S;
  std::cin >> S;
  bool ans = true;
  if (c < d) {
    for (int i = a - 1; i < d - 1; i++) {
      if (S[i] == '#' && S[i + 1] == '#') {
        ans = false;
      }
    }
  } else {
    ans = false;
    for (int i = b - 2; i < d - 1; i++) {
      if (S[i] == '.' && S[i + 1] == '.' && S[i + 2] == '.') {
        ans = true;
      }
    }
    for (int i = a - 1; i < c - 1; i++) {
      if (S[i] == '#' && S[i + 1] == '#') {
        ans = false;
      }
    }
  }
  if (ans) {
    std::cout << "Yes" << '\n';
  } else {
    std::cout << "No" << '\n';
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
