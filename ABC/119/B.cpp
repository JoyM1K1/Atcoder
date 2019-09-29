#include <bits/stdc++.h>
#define REP(i, N) for (ll i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

class BDigitalGifts {
public:
	void solve(std::istream& in, std::ostream& out) {
        int N;
        in >> N;
        double sum = 0.0;
        REP(i, N) {
            double x;
            string u;
            in >> x >> u;
            if (u == "JPY") sum += x;
            else sum += x * 380000.0;
        }
        out << setprecision(14) << sum << '\n';
	}
};


int main() {
	BDigitalGifts solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
