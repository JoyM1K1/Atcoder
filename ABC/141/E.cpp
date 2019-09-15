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
  int N;
  cin >> N;
  string S;
  cin >> S;
  int ans = 0;
  REP(i, N) {
    for (int j = i + 1; j < N; j++) {
      if (ans >= (N-i)/2) break;
      if (S[i] == S[j]) {
        int count = 1;
        for (int k = i + 1; k < N; k++) {
          if (S[k] == S[k+j-i] && k != j) {
            count++;
            ans = max(ans, count);
          } else {
            break;
          }
        }
      }
    }
  }
  cout << ans << '\n';
}
