#include <bits/stdc++.h>
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> S[M];
  REP(i, M) {
    int k;
    cin >> k;
    REP(j, k) {
      int s;
      cin >> s;
      s--;
      S[i].PB(s);
    }
  }
  int p[M];
  REP(i, M) cin >> p[i];
  int ans = 0;
  REP(i, (1 << N)) {
    bool ok = true;
    REP(j, M) {
      int count = 0;
      for (auto id : S[j]) {
        if (i & (1 << id)) {
          count++;
        }
      }
      count %= 2;
      if (count != p[j]) {
        ok = false;
        break;
      }
    }
    if (ok) ans++;
  }
  cout << ans << '\n';
}
