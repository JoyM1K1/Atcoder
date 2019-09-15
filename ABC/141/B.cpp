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
  string ans = "Yes";
  REP(i, S.size()) {
    if (i % 2 == 0 && S[i] == 'L') ans = "No";
    if (i % 2 == 1 && S[i] == 'R') ans = "No";
  }
  cout << ans << '\n';
}
