#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n)  for(int i=0;i<(n);++i)
#define ALL(x) (x).begin(),(x).end()
ll gcd(ll x,ll y){return y?gcd(y,x%y):x;}

int main() {
  typedef long long ll;
  int A, B, K;
  cin >> A >> B >> K;

  int count = 0;
  int i = gcd(A, B);
  while (count < K) {
    if (A % i == 0 && B % i == 0) {
      count++;
    }
    i--;
  }
  cout << i + 1 << endl;
}
