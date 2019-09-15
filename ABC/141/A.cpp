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
  string A[3] = {"Sunny", "Cloudy", "Rainy"};
  string ans;
  if (S == A[0]) ans = A[1];
  if (S == A[1]) ans = A[2];
  if (S == A[2]) ans = A[0];
  cout << ans << '\n';
}
