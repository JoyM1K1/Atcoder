#include <bits/stdc++.h>
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

class AFavoriteSound {
public:
	void solve(std::istream& in, std::ostream& out) {
        int A, B, C;
        in >> A >> B >> C;
        out << min(C, B / A) << '\n';
	}
};


int main() {
	AFavoriteSound solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
