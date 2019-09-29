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

class DLazyFaith {
public:
	void solve(std::istream& in, std::ostream& out) {
        ll A, B, Q;
        in >> A >> B >> Q;
        vector<ll> s, t;
        s.PB(-INFL);
        t.PB(-INFL);
        REP(i, A) {
            ll a;
            in >> a;
            s.PB(a);
        }
        s.PB(INFL);
        REP(i, B) {
            ll b;
            in >> b;
            t.PB(b);
        }
        t.PB(INFL);
        REP(i, Q) {
            ll x;
            in >> x;
            ll sr = lower_bound(ALL(s), x) - s.begin();
            ll sl = sr - 1;
            ll tr = lower_bound(ALL(t), x) - t.begin();
            ll tl = tr - 1;
//            out << sl << ' ' << sr << ' ' << tl << ' ' << tr << '\n';
            ll ans = INFL;
            ll _s[2] = {s[sl], s[sr]};
//            out << _s[0] << ' ' << _s[1] << '\n';
            ll _t[2] = {t[tl], t[tr]};
//            out << _t[0] << ' ' << _t[1] << '\n';
            REP(j, 2) {
                REP(k, 2) {
                    ll dist = abs(x - _s[j]) + abs(_s[j] - _t[k]);
//                    out << dist << '\n';
                    ans = min(ans, dist);
                    dist = abs(x - _t[j]) + abs(_t[j] - _s[k]);
//                    out << dist << '\n';
                    ans = min(ans, dist);
                }
            }
            out << ans << '\n';
        }
	}
};


int main() {
	DLazyFaith solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
