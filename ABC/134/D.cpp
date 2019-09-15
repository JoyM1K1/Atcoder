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
  int a[N];
  REP(i, N) cin >> a[i];
  int b[N] = {};
  int M = 0;
  for (int i = N; i >= 1; i--) {
    int count = 0;
    for (int j = N / i; j >= 1; j--) {
      if (j >= 2 && b[i * j - 1] == 1) {
        count++;
        continue;
      }
      if (j == 1) b[i - 1] = (a[i - 1] + count) % 2;
    }
  }
  REP(i, N) M += b[i];
  cout << M << '\n';
  int k = 0;
  REP(i, N) {
    if (b[i] == 1) {
      cout << i + 1;
      k++;
      if (k < M) cout << ' ';
      else cout << '\n';
    }
  }
}
