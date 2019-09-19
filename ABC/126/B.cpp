#include <bits/stdc++.h>
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

class BYYMMOrMMYY {
public:
	void solve(std::istream& in, std::ostream& out) {
        int s;
        in >> s;
        string ans;
        int left = s/100;
        int right = s % 100;
        bool isMl = 1 <= left && left <= 12;
        bool isMr = 1 <= right && right <= 12;
        if (isMl) {
            if (isMr) ans = "AMBIGUOUS";
            else ans = "MMYY";
        } else {
            if(isMr) ans = "YYMM";
            else ans = "NA";
        }
        out << ans << '\n';
	}
};


int main() {
	BYYMMOrMMYY solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
