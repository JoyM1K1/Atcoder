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

int ans;
int N, K;

ll dfs(int K, const vector<int> v[], int now, int from) {
  int can_use_color_num;
  if (from == -1)
    can_use_color_num = K - 1;
  else
    can_use_color_num = K - 2;

  if (K < v[now].size())
    return 0;
  else {
    ll case_num = 1;
    for (auto e : v[now]) {
      if (e == from)
        continue;
      case_num *= can_use_color_num;
      can_use_color_num--;
      case_num %= MOD;
    }
    for (auto e : v[now]) {
      if (e == from)
        continue;
      case_num *= dfs(K, v, e, now);
      case_num %= MOD;
    }
    return case_num;
  }
}

int main() {
  cin >> N >> K;
  vector<int> v[N];
  REP(i, N - 1) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    v[a].PB(b);
    v[b].PB(a);
  }
  ll ans = K * dfs(K, v, 0, -1);
  ans %= MOD;
  cout << ans << '\n';
}
