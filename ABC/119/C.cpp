#include <bits/stdc++.h>
#define REP(i, N) for (ll i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define INF 1e9
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

class CSyntheticKadomatsu {
    int N, A, B, C;
    int l[8];
public:
    int dfs(int cur, int a, int b, int c) {
        if (cur == N) {
            return min(a, min(b, c)) > 0 ? abs(a - A) + abs(b - B) + abs(c  - C) - 30 : INF;
        }
        int ans = INF;
        ans = min(ans, dfs(cur+1, a+l[cur], b, c) + 10);
        ans = min(ans, dfs(cur+1, a, b+l[cur], c) + 10);
        ans = min(ans, dfs(cur+1, a, b, c+l[cur]) + 10);
        ans = min(ans, dfs(cur+1, a, b, c));
        return ans;
    }
	void solve(std::istream& in, std::ostream& out) {
        in >> N >> A >> B >> C;
        REP(i, N) in >> l[i];
        out << dfs(0, 0, 0, 0) << '\n';
	}
};


int main() {
	CSyntheticKadomatsu solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
