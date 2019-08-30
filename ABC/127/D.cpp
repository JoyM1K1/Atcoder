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
  ll N, M;
  std::cin >> N >> M;
  vector<ll> A(N);
  REP(i, N) std::cin >> A[i];
  sort(ALL(A));
  vector<pair<ll, ll>> BC(M);
  REP(i, M) { std::cin >> BC[i].second >> BC[i].first; }
  sort(ALL(BC));
  reverse(ALL(BC));
  vector<ll> D(N);
  int id = 0;
  bool frag = false;
  REP(i, M) {
    REP(j, BC[i].second) {
      D[id] = BC[i].first;
      id++;
      if (id == N) {
        frag = true;
        break;
      }
    }
    if (frag) {
      break;
    }
  }
  ll sum = 0;
  REP(i, N) {
    if (A[i] < D[i]) {
      sum += D[i];
    } else {
      sum += A[i];
    }
  }
  std::cout << sum << '\n';
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
