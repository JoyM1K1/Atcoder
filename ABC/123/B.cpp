#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define ALL(x) (x).begin(), (x).end()
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

int main() {
  vector<int> A(5);
  REP(i, 5) { std::cin >> A.at(i); }
  int min_ = 10;
  int menu_index;
  REP(i, 5) {
    if (A.at(i) % 10 > 0) {
      if (A.at(i) % 10 < min_) {
        menu_index = i;
        min_ = A.at(i) % 10;
      }
    }
  }
  int time = 0;
  REP(i, 5) {
    if (i == menu_index) {
      time += A.at(i);
    } else {
      if (A.at(i) % 10 == 0) {
        time += A.at(i);
      } else {
        time += (A.at(i) / 10 + 1) * 10;
      }
    }
  }
  std::cout << time << '\n';
}
