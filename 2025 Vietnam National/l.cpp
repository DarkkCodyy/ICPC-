#include <bits/stdc++.h>

#define      FOR(i, a, b)     for (int i = (a), _##i = (b); i <= _##i; ++i)
#define      FORD(i, a, b)    for (int i = (a), _##i = (b); i >= _##i; --i)
#define      REP(i, a)        for (int i = 0, _##i = (a); i < _##i; ++i)
#define      fastio           ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define      file(name)       if (fopen (name".inp", "r")) { freopen (name".inp", "r", stdin); freopen (name".out", "w", stdout); }

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const int mod = 1e9 + 7;
const int maxn = 1e5 + 7;
/*_______________________SOLUTION IS HERE____________________________________*/


ll tt;

int main() {
    fastio;
    file("main");

    cin >> tt;
    while (tt--) {
        ll n, x, y, a, b;
        cin >> n >> x >> y >> a >> b;
        if (a > b) {
            if (x + 1 == y and x - 1 <= b) cout << "Zeros";
            else cout << "Kiaya";
        }
        else if (a < b) {
            if (x + 1 != y and n - y <= a and y - x - 1 <= a) cout << "Kiaya";
            else cout << "Zeros";
        }
        else {
            if ((y - x - 1) % (a + 1) == 0) cout << "Zeros";
            else cout << "Kiaya";
        }
        cout << "\n";
    }
    return 0;
}
