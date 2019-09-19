#include <bits/stdc++.h>
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

class BResale {
public:
	void solve(std::istream& in, std::ostream& out) {
        int N;
        in >> N;
        int ans = 0;
        int v[N], c[N];
        REP(i, N) in >> v[i];
        REP(i, N) in >> c[i];
        REP(i, N) {
            if (v[i] - c[i] > 0) ans += v[i] - c[i];
        }
        out << ans << '\n';
	}
};


int main() {
	BResale solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
