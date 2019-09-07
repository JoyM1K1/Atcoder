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
  int B[N-1];
  REP(i, N-1) cin >> B[i];
  int A[N] = {};
  A[0] = B[0];
  REP(i, N-1) {
    if (A[i] > B[i]) {
      A[i] = B[i];
      A[i+1] = B[i];
    } else {
      A[i+1] = B[i];
    }
  }
  int ans = 0;
  REP(i, N) ans += A[i];
  cout << ans << '\n';
}
