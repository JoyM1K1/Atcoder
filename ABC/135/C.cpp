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
  ll A[N+1], B[N];
  REP(i, N+1) cin >> A[i];
  REP(i, N) cin >> B[i];
  ll count = 0;
  REP(i, N) {
    if (A[i] < B[i]) {
      count += A[i];
      B[i] -= A[i];
      if (A[i+1] < B[i]) {
        count += A[i+1];
        A[i+1] = 0;
      } else {
        count += B[i];
        A[i+1] -= B[i];
      }
    } else {
      count += B[i];
    }
  }
  cout << count << '\n';
}
