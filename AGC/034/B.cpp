#include <bits/stdc++.h>
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }
ll div_ceil(ll, ll);

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int main() {
  string S = "";
  std::cin >> S;
  // REP(i, 200000 / 3) { S += "ABC"; }
  ll A_count = 0;
  ll count = 0;
  REP(i, S.size() - 1) {
    if (S[i] == 'A') {
      A_count++;
    } else if (S[i] == 'B') {
      if (S[i + 1] == 'C') {
        count += A_count;
        i++;
      } else {
        A_count = 0;
      }
    } else if (S[i] == 'C') {
      A_count = 0;
    }
  }
  std::cout << count << '\n';
}

ll div_ceil(ll a, ll b) {
  ll quotient = a / b;
  ll remainder = a % b;
  if (remainder == 0) {
    return quotient;
  } else {
    return quotient + 1;
  }
}
