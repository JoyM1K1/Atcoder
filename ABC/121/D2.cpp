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
  ll A, B;
  cin >> A >> B;
  ll d = B - A + 1;
  ll ans;
  if (A % 2 == 0) {
    if (B % 2 == 1) {
      if ((d / 2) % 2 == 0) ans = 0;
      else ans = 1;
    } else {
      d--;
      if ((d / 2) % 2 == 0) ans = B;
      else ans = B ^ 1;
    }
  } else {
    if (B % 2 == 1) {
      d--;
      if ((d / 2) % 2 == 0) ans = A;
      else ans = A ^ 1;
    } else {
      d -= 2;
      if ((d / 2) % 2 == 0) ans = A ^ B;
      else ans = A ^ B ^ 1;
    }
  }
  cout << ans << '\n';
}
