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
  int N, K;
  cin >> N >> K;
  ll V[N];
  REP(i, N) cin >> V[i];
  int R = min(N, K);
  ll ans = 0;
  for (int i = 0; i <= R; i++) {
    for (int j = 0; i + j <= R; j++) {
      priority_queue<ll> pq;
      ll temp = 0;
      for (int a = 0; a < i; a++) {
        pq.push(-V[a]);
        // cout << -V[a] << '\n';
      }
      for (int b = 0; b < j; b++) {
        pq.push(-V[N - 1 - b]);
        // cout << -V[N-1-b] << '\n';
      }
      for (int k = 0; k < K - (i + j); k++) {
        if (!pq.empty() && pq.top() > 0) pq.pop();
      }
      int count = pq.size();
      REP(k, count) {
        temp -= pq.top();
        pq.pop();
      }
      // cout << temp << '\n';
      ans = max(ans, temp);
    }
  }
  cout << ans << '\n';
}
