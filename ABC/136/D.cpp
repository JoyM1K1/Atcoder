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
  string S;
  cin >> S;
  int N = S.size();
  char id = 'R';
  vector<int> v;
  vector<int> u;
  REP(i, N) {
    if (S[i] != id) {
      if (id == 'R')
        v.PB(i);
      else
        u.PB(i);
      id = S[i];
    }
  }
  u.PB(N);
  int k = 0;
  int ans[N] = {};
  REP(i, N) {
    if (i == u[k])
      k++;
    if (abs(i - v[k]) % 2 == 0) {
      ans[v[k]]++;
    } else {
      ans[v[k] - 1]++;
    }
  }
  REP(i, N) cout << ans[i] << (i < N - 1 ? ' ' : '\n');
}
