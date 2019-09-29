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

class CGoToSchool {
public:
	void solve(std::istream& in, std::ostream& out) {
        ll N;
        in >> N;
        pair<ll, ll> A[N];
        REP(i, N) {
            in >> A[i].first;
            A[i].second = i+1;
        }
        sort(A,A+N);
        REP(i, N) {
            out << A[i].second << (i < N - 1 ? ' ':'\n');
        }
	}
};


int main() {
	CGoToSchool solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
