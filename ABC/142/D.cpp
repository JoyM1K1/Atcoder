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

class DDisjointSetOfCommonDivisors {
public:
	void solve(std::istream& in, std::ostream& out) {
        ll A, B;
        in >> A >> B;
        ll G = gcd(A, B);
        set<ll> ans;
        ans.insert(1);
        ll a = 2;
        while (G >= a * a) {
            if (G % a == 0) {
                G /= a;
                ans.insert(a);
            } else {
                a++;
            }
        }
        ans.insert(G);
        out << ans.size() << '\n';
	}
};


int main() {
	DDisjointSetOfCommonDivisors solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
