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
  cin >> N;
  bool X[100001] = {false};
  bool Y[100001] = {false};
  REP(i, N) {
    int x, y;
    cin >> x >> y;
    X[x] = true;
    Y[y] = true;
  }
  ll xx = 1;
  ll yy = 1 REP(i, 100001) {}
  sort(v, v + N);
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
