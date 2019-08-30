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
  ll H[N];
  bool ans = true;
  REP(i, N) { cin >> H[i]; }
  ll max_ = 0;
  REP(i, N) {
    max_ = max(max_, H[i]);
    if (H[i] < max_ - 1)
      ans = false;
  }
  cout << (ans ? "Yes" : "No") << '\n';
}
