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
  int N, D;
  cin >> N >> D;
  int X[N][D];
  REP(i, N) REP(j, D) cin >> X[i][j];
  int count = 0;
  REP(i, N) {
    for (int j = i + 1; j < N; j++) {
      int dist = 0;
      REP(k, D) { dist += (X[i][k] - X[j][k]) * (X[i][k] - X[j][k]); }
      REP(i, 1000) {
        if (dist == i * i)
          count++;
      }
    }
  }
  cout << count << '\n';
}
