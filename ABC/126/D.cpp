#include <bits/stdc++.h>
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

class DEvenRelation {
public:
	void solve(std::istream& in, std::ostream& out) {
        int N;
        in >> N;
        vector<vector<int>> to(N), cost(N);
        REP(i, N - 1) {
            int a, b, w;
            in >> a >> b >> w;
            a--;
            b--;
            to[a].PB(b); cost[a].PB(w);
            to[b].PB(a); cost[b].PB(w);
        }
        vector<int> ans(N, -1);
        queue<int> q;
        ans[0] = 0;
        q.push(0);
        while (!q.empty()) {
            int v = q.front();
            q.pop();
            REP(i, to[v].size()) {
                int u = to[v][i];
                int w = cost[v][i];
                if (ans[u] != -1) continue;
                ans[u] = (ans[v] + w) % 2;
                q.push(u);
            }
        }
        REP(i, N) {
            out << ans[i] << '\n';
        }
	}
};


int main() {
	DEvenRelation solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
