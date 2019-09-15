#include <bits/stdc++.h>
using namespace std;
#define REP(i,n)  for(int i=0;i<(n);++i)

int main() {
  typedef long long ll;
  string S;
  cin >> S;

  int count = 0;
  int max = 0;
  REP(i, S.size()) {
    if (S.at(i) == 'A' || S.at(i) == 'C' || S.at(i) == 'G' || S.at(i) == 'T') {
      count++;
      if (count > max) {
        max = count;
      }
    }
    else {
      if (count > max) {
        max = count;
      }
      count = 0;
    }
  }
  cout << max << endl;
}
