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
  vector<tuple<string, int, int>> v(N);
  REP(i, N) {
    string s;
    int a;
    std::cin >> s >> a;
    v[i] = make_tuple(s, a, i + 1);
  }
  sort(ALL(v),
       [](const auto &x, const auto &y) { return get<0>(x) < get<0>(y); });
  string id = get<0>(v[0]);
  int index = 0;
  for (int i = 1; i < N; i++) {
    if (id != get<0>(v[i])) {
      sort(v.begin() + index, v.begin() + i,
           [](const auto &x, const auto &y) { return get<1>(x) > get<1>(y); });
      id = get<0>(v[i]);
      index = i;
    }
    if (i == N - 1) {
      sort(v.begin() + index, v.end(),
           [](const auto &x, const auto &y) { return get<1>(x) > get<1>(y); });
    }
  }
  // REP(i, N) {
  //   std::cout << get<0>(v[i]) << ' ' << get<1>(v[i]) << ' ' << get<2>(v[i])
  //             << '\n';
  // }
  REP(i, N) { std::cout << get<2>(v[i]) << '\n'; }
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
