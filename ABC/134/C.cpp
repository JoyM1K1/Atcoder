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
  int N;
  cin >> N;
  int A[N];
  int _max = 0;
  int _max2 = 0;
  REP(i, N) {
    cin >> A[i];
    _max = max(_max, A[i]);
  }
  int count = 0;
  REP(i, N) {
    if (A[i] == _max) count++;
  }
  if (count == 1) {
    REP(i, N) {
      if (A[i] < _max) _max2 = max(_max2, A[i]);
    }
  }
  else _max2 = _max;
  REP(i, N) {
    int ans;
    if (A[i] == _max) ans = _max2;
    else ans = _max;
    cout << ans << '\n';
  }
}
