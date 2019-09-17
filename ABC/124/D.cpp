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
  int N, K;
  cin >> N >> K;
  string S;
  cin >> S;
  vector<int> count;
  char id = S[0];
  if (id == '0') count.PB(0);
  int c = 0;
  REP(i, N) {
    if (S[i] == id) c++;
    else {
      count.PB(c);
      c = 1;
      id = S[i];
    }
  }
  count.PB(c);
  if (S[N-1] == '0') count.PB(0);
  int sum[count.size()+1] = {};
  REP(i, count.size()) sum[i+1] = sum[i] + count[i];
  // REP(i, count.size()+1) cout << sum[i] << ' ';
  // cout << '\n';
  int ans = count[0];
  if (K >= count.size()/2) ans = sum[count.size()];
  else {
    for (int i = 2 * K + 1; i <= count.size(); i+=2) {
      // cout << sum[i] << '\n';
      // cout << sum[i-(2*K+1)] << '\n';
      ans = max(ans, sum[i] - sum[i-(2*K+1)]);
    }
  }
  cout << ans << '\n';
}
