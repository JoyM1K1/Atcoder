#include <bits/stdc++.h>
using namespace std;
#define REP(i,n)  for(int i=0;i<(n);++i)

int main() {
  int N, M, C;
  cin >> N >> M >> C;

  vector<int> B(M);
  REP(i, M) {cin >> B.at(i);}

  vector<vector<int>> A(N, vector<int>(M));
  REP(i, N) {
    REP(j, M) {
      cin >> A.at(i).at(j);
    }
  }

  int count = 0;
  REP(i, N) {
    int sum = 0;
    REP(j, M) {
      sum += A.at(i).at(j) * B.at(j);
    }
    if (sum + C > 0) {
      count++;
    }
  }

  cout << count << endl;
}
