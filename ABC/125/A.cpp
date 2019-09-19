#include <bits/stdc++.h>
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

class ABiscuitGenerator {
public:
	void solve(std::istream& in, std::ostream& out) {
        int A, B, T;
        in >> A >> B >> T;
        int ans = 0;
        for (int i = 1; i * A <= T; i++) {
            ans += B;
        }
        out << ans << '\n';
	}
};


int main() {
	ABiscuitGenerator solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
