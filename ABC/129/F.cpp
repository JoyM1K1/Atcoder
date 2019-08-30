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
  ll L, A, B, M;
  std::cin >> L >> A >> B >> M;
  ll a = A % M;
  ll b = B % M;
  ll N = 0;
  ll keta = 0;
  ll temp = 1;
  for (int i = L - 1; i >= 0; i--) {
    ll S = (a + b * i) % M;
    REP(j, keta) { temp = (temp * 10) % M; }
    N += S * temp;
    while (S) {
      S /= 10;
      keta++;
    }
  }
  std::cout << N % M << '\n';
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
