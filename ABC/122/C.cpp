#include <bits/stdc++.h>
using namespace std;
#define REP(i,n)  for(int i=0;i<(n);++i)

int main() {
  typedef long long ll;
  ll N, Q;
  cin >> N >> Q;
  string S;
  cin >> S;
  vector<ll> l(Q);
  vector<ll> r(Q);
  REP(i, Q) {
    cin >> l.at(i) >> r.at(i);
  }

  vector<ll> count(N);
  REP(i, N - 1) {
    count.at(i + 1) = count.at(i);
    if (S.at(i) == 'A' && S.at(i + 1) == 'C') {
      count.at(i + 1)++;
    }
  }

  REP(i, Q) {
    cout << count.at(r.at(i) - 1) - count.at(l.at(i) - 1) << endl;
  }
}
