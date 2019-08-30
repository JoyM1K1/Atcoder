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
  int N;
  std::cin >> N;
  int W[N];
  REP(i, N) std::cin >> W[i];
  ll sum = 0;
  REP(i, N) sum += W[i];
  ll min_ = sum;
  ll left = 0;
  ll right = sum;
  REP(i, N) {
    min_ = min(min_, abs(left - right));
    left += W[i];
    right -= W[i];
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
