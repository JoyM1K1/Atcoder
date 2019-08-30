#include <bits/stdc++.h>
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

//++時計回り --反時計回り
// int dx[4] = {1, 0, -1, 0};
// int dy[4] = {0, 1, 0, -1};

int main() {
  ll N;
  cin >> N;
  ll A[N];
  REP(i, N) cin >> A[i];
  ll x[N];
  x[0] = 0;
  REP(i, N) {
    if (i % 2 == 0)
      x[0] += A[i];
    else
      x[0] -= A[i];
  }
  for (int i = 1; i < N; i++) {
    x[i] = 2 * A[i - 1] - x[i - 1];
  }
  REP(i, N) {
    cout << x[i];
    if (i < N - 1)
      cout << ' ';
  }
  cout << '\n';
}
