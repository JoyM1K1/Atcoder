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

class E1Or2 {
public:
	void solve(std::istream& in, std::ostream& out) {
        ll N, M;
        in >> N >> M;
        ll X[M], Y[M], Z[M];
        UnionFind U(N);
        REP(i, M) {
            in >> X[i] >> Y[i] >> Z[i];
            X[i]--; Y[i]--;
            U.connect(X[i], Y[i]);
        }
        set<ll> ans;
        REP(i, N) {
            ans.insert(U.root(i));
        }
        out << ans.size() << '\n';
	}
};


int main() {
	E1Or2 solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
