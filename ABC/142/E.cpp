#include <bits/stdc++.h>
#define REP(i, N) for (ll i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define INF 1e9
#define INFL 1e18
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

class EGetEverything {
public:
	void solve(std::istream& in, std::ostream& out) {
        int N, M;
        in >> N >> M;
        ll a[M];
        int c[M] = {};
        REP(i, M) {
            in >> a[i];
            int b;
            in >> b;
            REP(j, b) {
                int x;
                in >> x;
                x--;
                c[i] |= (1<<x);
            }
        }
//        REP(i, M) out << a[i] << ' ';
//        out << '\n';
//        REP(i, M) out << c[i] << ' ';
//        out << '\n';
        vector<vector<ll>> dp(M+1, vector<ll>((1<<N), INF));
        dp[0][0] = 0;
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < (1<<N); j++) {
                if (dp[i][j] == INF) continue;
                dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
                dp[i + 1][j | c[i]] = min(dp[i+1][j|c[i]], min(dp[i][j | c[i]], dp[i][j] + a[i]));
            }
        }
//        REP(i, M+1) {
//            REP(j, (1<<N)) {
//                out << dp[i][j] << ' ';
//            }
//            out << '\n';
//        }
        if (dp[M][(1<<N)-1] == INF) dp[M][(1<<N)-1] = -1;
        out << dp[M][(1<<N) - 1] << '\n';
	}
};


int main() {
	EGetEverything solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
