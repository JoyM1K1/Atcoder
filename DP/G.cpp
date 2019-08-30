#include <bits/stdc++.h>
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

const int MAX = 100010;
vector<int> v[MAX];
bool vis[MAX];
int ans;
int N, M;
int dist[MAX];

int dfs(int x) {
  vis[x] = true;
  int sum = 1, maxv = 0;
  REP(i, v[x].size()) {
    int val;
    if (dist[v[x][i]] == 0)
      val = dfs(v[x][i]);
    else
      val = dist[v[x][i]];
    maxv = max(maxv, val);
  }
  sum += maxv;
  dist[x] = sum;
  return sum;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  std::cin >> N >> M;
  ans = 0;
  REP(i, M) {
    int x, y;
    cin >> x >> y;
    v[x].PB(y);
  }
  for (int i = 1; i <= N; i++) {
    if (!vis[i])
      ans = max(ans, dfs(i));
  }
  cout << ans - 1 << '\n';
}
