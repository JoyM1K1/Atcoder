#include <bits/stdc++.h>
#define REP(i, N) for (ll i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

class AStillTBD {
public:
	void solve(std::istream& in, std::ostream& out) {
	    int y, m, d;
	    char c;
	    in >> y >> c >> m >> c >> d;
	    out << (m <= 4 ? "Heisei" : "TBD") << '\n';
	}
};


int main() {
	AStillTBD solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
