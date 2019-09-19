#include <bits/stdc++.h>
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

class AChangingACharacter {
public:
	void solve(std::istream& in, std::ostream& out) {
        int N, K;
        in >> N >> K;
        K--;
        string s = "";
        REP(i, N) {
            char a;
            in >> a;
            if (i == K) a += 32;
            s += a;
        }
        out << s << '\n';
	}
};


int main() {
	AChangingACharacter solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
