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
  ll N, M;
  cin >> N >> M;
  priority_queue<ll> A;
  REP(i, N) {
    ll a;
    cin >> a;
    A.push(a);
  }
  REP(i, M) {
    ll b = A.top()/2;
    A.pop();
    A.push(b);
  }
  ll ans = 0;
  REP(i, N) {
    ans += A.top();
    A.pop();
  }
  cout << ans << '\n';
}
