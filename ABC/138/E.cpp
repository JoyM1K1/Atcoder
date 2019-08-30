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
  string s,t;
  cin >> s >> t;
  vector<char> a,b;
  REP(i, s.size()) a.PB(s[i]);
  REP(i, t.size()) b.PB(t[i]);
  sort(ALL(a));
  sort(ALL(b));
  vector<pair<char, ll>> seta,setb;
  ll id = 0;
  ll idd = 0;
  seta.PB(MP(a[0],1));
  REP(i, a.size() - 1) {
    if(a[i+1] != a[id]) {
      seta.PB(MP(a[i+1],1));
      id = i+1;
      idd++;
    } else {
      seta[idd].second++;
    }
  }
  id = 0;
  idd = 0;
  setb.PB(MP(b[0],1));
  REP(i, b.size() - 1) {
    if(b[i+1] != b[id]) {
      setb.PB(MP(b[i+1],1));
      id = i+1;
      idd++;
    } else {
      setb[idd].second++;
    }
  }
  bool ok;
  REP(i, setb.size()) {
    ok = false;
    REP(j, seta.size()) {
      if (setb[i].first == seta[j].first) {
        ok = true;
        break;
      }
    }
    if (!ok) {
      break;
    }
  }
  if (!ok) {
    cout << -1 << '\n';
  } else {
    ll ans = 0;
    id = 0;
    ll k = 0;
    while (id < t.size()) {
      if(s[k % s.size()] == t[id]) id++;
      k++;
    }
    cout << k << '\n';
  }
}
