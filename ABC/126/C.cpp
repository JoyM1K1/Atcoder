#include <bits/stdc++.h>
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

class CDiceAndCoin {
public:
	void solve(std::istream& in, std::ostream& out) {
        int N, K;
        in >> N >> K;
        double ans = 0;
        for (int i = 1; i <= N; i++) {
            double prob = 1.0 / N;
            int score = i;
            while (score < K) {
                score *= 2;
                prob /= 2.0;
            }
            ans += prob;
        }
        out << setprecision(12) << ans << '\n';
	}
};


int main() {
	CDiceAndCoin solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
