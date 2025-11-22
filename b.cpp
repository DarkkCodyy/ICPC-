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


struct cth {
    ll t;
    ll v;
};

ll tt;

int main() {
    fastio;
    file("main");

    cin >> tt;

    while (tt--) {
        ll n; cin >> n;

        vector<cth> b(n);
        REP(i, n) {
            cin >> b[i].t >> b[i].v;
        }

        sort (b.begin(), b.end(), [](auto x, auto y){
            if (x.t + x.v != y.t + y.v) return x.t + x.v > y.t + y.v;
            return x.v > y.v;
        });

        ll ans = 0;
        ll time = 0;

        REP(i, n)  {
            ll add = max(0ll, b[i].t - time);
            time += add;
            b[i].v += add;  
            ans += b[i].v * b[i].v;
        }

        cout << ans << "\n";

    }
    return 0;
}
