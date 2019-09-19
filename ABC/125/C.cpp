#include <bits/stdc++.h>
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

class CGCDOnBlackboard {
public:
	void solve(std::istream& in, std::ostream& out) {
        int N;
        in >> N;
        ll A[N];
        REP(i, N) in >> A[i];
        ll left[N+1], right[N+1];
        left[0] = A[0];
        right[N] = A[N-1];
        for (int i = 1; i <= N; i++) {
            left[i] = gcd(left[i-1], A[i-1]);
            right[N-i] = gcd(right[N-i+1], A[N-i]);
        }
        ll ans = 0;
        REP(i, N) {
            if (i == 0) ans = max(ans, right[1]);
            else if (i == N -1) ans = max(ans, left[N-1]);
            else ans = max(ans, gcd(left[i], right[i+1]));
        }
        out << ans << '\n';
	}
};


int main() {
	CGCDOnBlackboard solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
