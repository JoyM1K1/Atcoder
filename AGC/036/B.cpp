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
const ll m = 2 * 1e5 + 1;
int main() {
  ll N, K;
  cin >> N >> K;
  ll A[N];
  REP(i, N) cin >> A[i];
  ll memo[m] = {};
  ll memo_[m] = {};
  REP(i, N) memo[A[i]]++;
  REP(i, N) memo_[A[i]]++;
  vector<vector<ll>> v(K + 1);
  REP(i, N) v[0].PB(A[i]);
  ll k = 0;
  // REP(i, v[k].size()) cout << v[k].at(i) << '\n';
  while (true) {
    REP(i, v[k].size()) {
      if (memo[v[k].at(i)] == 1) {
        v[k + 1].PB(v[k].at(i));
      } else {
        for (int j = i + 1; j < v[k].size(); j++) {
          memo[v[k].at(j)]--;
          if (v[k].at(i) == v[k].at(j)) {
            memo[v[k].at(j)]--;
            i = j;
            break;
          }
        }
      }
    }
    // cout << "debug" << endl;
    k++;
    if (v[k].size() == 0 || k == K)
      break;
    v[k].insert(v[k].end(), ALL(v[0]));
    REP(i, m) memo[i] += memo_[i];
    // REP(j, v[k].size()) cout << v[k].at(j) << ' ';
    // cout << '\n';
    // cout << "memo: ";
    // for (int i = 1; i < 4; i++)
    //   cout << memo[i] << ' ';
    // cout << '\n';
  }
  if (k != K)
    k = K % k;
  REP(i, v[k].size() - v[0].size()) {
    cout << v[k].at(i);
    if (i < v[k].size() - v[0].size() - 1)
      cout << ' ';
    else
      cout << '\n';
  }
}
