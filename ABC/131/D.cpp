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
  ll N;
  std::cin >> N;
  pair<ll, ll> v[N];
  REP(i, N) { cin >> v[i].second >> v[i].first; }
  sort(v, v + N);
  ll time = 0;
  // REP(i, N) { cout << v[i].first << v[i].second << '\n'; }
  bool ans = true;
  REP(i, N) {
    time += v[i].second;
    if (time > v[i].first) {
      ans = false;
      break;
    }
  }
  if (ans) {
    cout << "Yes" << '\n';
  } else {
    cout << "No" << '\n';
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
