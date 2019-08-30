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
  ll count = 0;
  for (int i = 1; i <= N; i++) {
    if (i / 10 == 0)
      count++;
    else if (i / 100 == 0)
      continue;
    else if (i / 1000 == 0)
      count++;
    else if (i / 10000 == 0)
      continue;
    else if (i / 100000 == 0)
      count++;
  }
  cout << count << '\n';
}
