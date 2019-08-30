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
  ll N, X;
  std::cin >> N >> X;
  pair<pair<ll, ll>, ll> p[N];
  ll A = 0;
  ll B = 0;
  REP(i, N) {
    ll b, l, u;
    std::cin >> b >> l >> u;
    p[i] = MP(MP(u, -b), l);
    B += b * l;
  }
  sort(p, p + N);
  ll k = 0;
  ll A_ = 0;
  while (A < B) {
    A_ = A;
    ll b_ = -p[k].first.second;
    ll l_ = p[k].second;
    ll u_ = p[k].first.first;
    ll sub = u_ - l_;
    B += b_ * sub;
    A += X * u_;
    k++;
  }
  std::cout << X * (k - 1) + div_ceil(B - A_, p[k].first.first) << '\n';
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
