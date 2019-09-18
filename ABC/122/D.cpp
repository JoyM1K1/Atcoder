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
char s[4] = {'A', 'C', 'G', 'T'};
ll memo[101][4][4][4];

ll dfs(int length, int a, int b, int c, int n) {
  ll ret = 0;
  // 最後までたどり着いたら 1
  if (length == n) return 1;
  // 最後までたどり着いたやつはその合計を1個前に足す
  if (memo[length][a][b][c]) return memo[length][a][b][c];
  REP(d, 4) {
    if (b == 0 && c == 1 && d == 2) continue; //_AGC
    if (b == 1 && c == 0 && d == 2) continue; //_GAC
    if (b == 0 && c == 2 && d == 1) continue; //_ACG
    if (a == 0 && b == 1 && d == 2) continue; //AG_C
    if (a == 0 && c == 1 && d == 2) continue; //A_GC
    // どれにも当てはまらないなら1個左にずらす
    ret += dfs(length + 1, b, c, d, n);
  }
  return memo[length][a][b][c] = ret % MOD;
}

int main() {
  int N;
  cin >> N;
  cout << dfs(0, 3, 3, 3, N) << '\n';
}
