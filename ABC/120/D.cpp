#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

struct UnionFind {
    vector<ll> data;
    UnionFind(ll size) : data(size, -1) {}

    ll root(ll x) {
        if (data[x] < 0)
            return x;
        else
            return data[x] = root(data[x]);
    }

    ll size(ll x) { return -data[root(x)]; }

    bool isConnect(ll x, ll y) { return root(x) == root(y); }

    bool connect(ll x, ll y) {
        x = root(x);
        y = root(y);

        if (x == y)
            return false;

        if (data[x] > data[y]) {
            x ^= y;
            y ^= x;
            x ^= y;
        }

        data[x] = data[x] + data[y]; // membersize++
        data[y] = x;
        return true;
    }
};

#define REP(i, N) for (ll i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

class DDecayedBridges {
public:
	void solve(std::istream& in, std::ostream& out) {
        ll N, M;
        in >> N >> M;
        vector<ll> a(M);
        vector<ll> b(M);
        REP(i, M) {
            in >> a[i] >> b[i];
            a[i]--; b[i]--;
        }
        ll ans[M];
        ans[M-1] = (N * (N - 1)) / 2;
        UnionFind U(N);
        for (ll i = M - 1; i >= 1; i--) {
            ll node1 = a[i], node2 = b[i];
            if (U.isConnect(node1, node2)) {
                ans[i - 1] = ans[i];
            } else {
                ans[i - 1] = ans[i] - U.size(node1) * U.size(node2);
                U.connect(node1, node2);
            }
        }
        REP(i, M) out << ans[i] << '\n';
	}
};


int main() {
	DDecayedBridges solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
