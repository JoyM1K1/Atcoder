#include <bits/stdc++.h>
#define REP(i, N) for (ll i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define INF 1e9;
#define INFL 1e18;
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

class AOddsOfOddness {
public:
	void solve(std::istream& in, std::ostream& out) {
        int n;
        in >> n;
        double ans;
        if (n % 2 == 0) ans = 0.5;
        else {
            ans = (n+1) / 2;
            ans /= n;
        }
        out << setprecision(12) << ans << '\n';
	}
};


int main() {
	AOddsOfOddness solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
