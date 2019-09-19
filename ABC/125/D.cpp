#include <bits/stdc++.h>
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

class DFlippingSigns {
public:
	void solve(std::istream& in, std::ostream& out) {
        int N;
        in >> N;
        ll _min = 1e9;
        ll minus = 0;
        ll ans = 0;
        REP(i, N) {
            ll a;
            in >> a;
            if (a < 0) minus++;
            a = abs(a);
            _min = min(_min, a);
            ans += a;
        }
        if (minus % 2 == 1) {
            ans -= _min*2;
        }
        out << ans << '\n';
	}
};


int main() {
	DFlippingSigns solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
