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
  int N, L;
  std::cin >> N >> L;
  ll sum = 0;
  ll apple[N];
  ll abs_apple[N];
  REP(i, N) {
    apple[i] = L + i;
    abs_apple[i] = abs(apple[i]);
    sum += apple[i];
  }
  ll mini = abs_apple[0];
  ll ans = sum;
  REP(i, N) {
    if (mini >= abs_apple[i]) {
      mini = abs_apple[i];
      ans = sum - apple[i];
    }
  }
  cout << ans << '\n';
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
