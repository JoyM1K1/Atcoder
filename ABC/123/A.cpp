#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define ALL(x) (x).begin(), (x).end()
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

int main() {
  vector<int> a(5);
  int k;
  REP(i, 5) { cin >> a.at(i); }
  cin >> k;
  bool Yay = true;
  REP(i, 5) {
    REP(j, 5) {
      if (abs(a.at(i) - a.at(j)) > k) {
        Yay = false;
      }
    }
  }
  if (Yay) {
    std::cout << "Yay!" << '\n';
  } else {
    std::cout << ":(" << '\n';
  }
}
