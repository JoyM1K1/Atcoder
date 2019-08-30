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
  ll N, K;
  std::cin >> N >> K;
  ll a[N];
  REP(i, N) { std::cin >> a[i]; }
  ll ans = 0;
  ll sum = 0;
  ll right = 0;
  REP(left, N) {
    while (sum < K && right < N) {
      sum += a[right];
      right++;
    }
    if (sum >= K) {
      ans += N - (right - 1); // while の中で right++ で1足した分引いている
      sum -= a[left];
    }
  }
  std::cout << ans << '\n';
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
