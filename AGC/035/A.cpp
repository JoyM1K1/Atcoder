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
const ll MAXN = 1000000001;
int main() {
  ll N;
  cin >> N;
  ll a[N];
  REP(i, N) cin >> a[i];
  bool memo[MAXN] = {false};
  REP(i, N) {
    for (int j = i + 1; j < N; j++) {
      memo[a[i] ^ a[j]] = true;
    }
  }
  REP(i, N)
}
