#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int zero = 0;
  int one = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == '0') {
      zero++;
    }
    else {
      one++;
    }
  }
  if (zero >= one) {
    cout << one * 2 << endl;
  }
  else {
    cout << zero * 2 << endl;
  }
}
