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
const int p = 2019;
int main() {
  ll L, R;
  cin >> L >> R;
  ll right = min(L + 2019, R);
  int ans = 2020;
  for (int i = L; i <= right; i++) {
    for (int j = i + 1; j <= right; j++) {
      ans = min(ans, ((i % p) * (j % p)) % p);
    }
  }
  cout << ans << '\n';
}
