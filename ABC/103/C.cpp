#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

int main() {
  ll N;
  cin >> N;
  vector<ll> a(N / 2);
  vector<ll> b(N / 2);
  vector<ll> a_count(100000);
  vector<ll> b_count(100000);
  REP(i, N / 2) { cin >> a.at(i) >> b.at(i); }

  REP(i, N / 2) {
    a_count.at(a.at(i) - 1)++;
    b_count.at(b.at(i) - 1)++;
  }

  ll a_mode_value, b_mode_value;
  ll a_mode_count = 0, b_mode_count = 0;
  REP(i, 100000) {
    if (a_count.at(i) > a_mode_count) {
      a_mode_count = a_count.at(i);
      a_mode_value = i + 1;
    }
    if (b_count.at(i) > b_mode_count) {
      b_mode_count = b_count.at(i);
      b_mode_value = i + 1;
    }
  }

  sort(ALL(a_count));
  sort(ALL(b_count));
  reverse(ALL(a_count));
  reverse(ALL(b_count));

  if (a_mode_value == b_mode_value) {
    std::cout << min(N - a_count.at(0) - b_count.at(1),
                     N - a_count.at(1) - b_count.at(0))
              << '\n';
  } else {
    std::cout << N - a_mode_count - b_mode_count << '\n';
  }
}
