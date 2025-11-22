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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll &i: a) cin >> i;
        
        ll ans = 0;
        ll sum = 0, pf = 0, lss = 0;

        for (ll i: a) {
            sum += i;
            pf += i;
            lss = min(lss, pf);
            if (pf > 0) pf= 0;
            ans = max(ans, sum - lss);
        }
        
        cout << ans << "\n";
    }
    return 0;
}
