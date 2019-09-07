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
  char S[N];
  REP(i, N) cin >> S[i];
  int count = 0;
  char id = S[0];
  int ans = 0;
  REP(i, N-1) {
    if (count < K) {
      if (S[i] != id && S[i+1] == id) {
        count++;
      }
      ans++;
    } else {
      if (S[i] == S[i+1]) ans++;
    }
  }
  cout << ans << '\n';
}
