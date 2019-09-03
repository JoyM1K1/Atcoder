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
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int N;
  cin >> N;
  queue<int> A[N];
  REP(i, N) REP(j, N-1) {
    int a; cin >> a; a--;
    A[i].emplace(a);
  }
  bool memo[N];
  ll ans = 0;
  ll count = 0;
  bool NG;
  while(count < N*(N-1)/2) {
    NG = true;
    REP(j, N) memo[j] = true;
    REP(j, N) {
      int k = A[j].front();
      if (memo[j] && memo[k]) {
        if (A[k].front() == j && !A[j].empty()) {
          memo[k] = false;
          memo[j] = false;
          A[k].pop();
          A[j].pop();
          NG = false;
          count++;
        }
      }
    }
    if (NG) break;
    ans++;
  }
  if (NG) {
    cout << -1 << '\n';
  } else {
    cout << ans << '\n';
  }
}
