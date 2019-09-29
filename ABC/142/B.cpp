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

class BRollerCoaster {
public:
	void solve(std::istream& in, std::ostream& out) {
        ll N, K;
        in >> N >> K;
        int count = 0;
        REP(i, N) {
            int h;
            in >> h;
            if (h >= K) count++;
        }
        out << count << '\n';
	}
};


int main() {
	BRollerCoaster solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
