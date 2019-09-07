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
  int A[N], B[N], C[N];
  REP(i, N) {
    int x;
    cin >> x; x--;
    A[i] = x;
  }
  REP(i, N) {
    int x;
    cin >> x;
    B[i] = x;
  }
  REP(i, N-1) {
    int x;
    cin >> x;
    C[i] = x;
  }
  int ans = 0;
  REP(i, N) {
    ans += B[i];
  }
  REP(i, N-1) {
    if (A[i] + 1 == A[i+1]) ans += C[A[i]];
  }
  cout << ans << '\n';

}
