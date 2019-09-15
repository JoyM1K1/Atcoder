#include <bits/stdc++.h>
using namespace std;
#define REP(i,n)  for(int i=0;i<(n);++i)

int main() {
  typedef long long ll;
  ll N, M;
  cin >> N >> M;
  vector<vector<ll>> AB(N, vector<ll>(2));
  REP(i, N) {
    REP(j, 2) {
      cin >> AB.at(i).at(j);
    }
  }

  sort(AB.begin(), AB.end(), [](auto& x, auto& y){return x.at(0) < y.at(0);});

  ll count = 0;
  ll ans = 0;
  ll k = 0;
  while (count < M) {
    count += AB.at(k).at(1);
    k++;
  }

  REP(i, k) {
    ans += AB.at(i).at(0) * AB.at(i).at(1);
  }

  ans -= AB.at(k - 1).at(0) * (count - M);

  cout << ans << endl;
}
