#include <bits/stdc++.h>

#define      FOR(i, a, b)     for (int i = (a), _##i = (b); i <= _##i; ++i)
#define      FORD(i, a, b)    for (int i = (a), _##i = (b); i >= _##i; --i)
#define      REP(i, a)        for (int i = 0, _##i = (a); i < _##i; ++i)
#define      fastio           ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define      file(name)       if (fopen (name".inp", "r")) { freopen (name".inp", "r", stdin); freopen (name".out", "w", stdout); }

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const int mod = 998244353;
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
        REP(i, n) {
            cin >> a[i];
        }
        sort (a.begin(), a.end());
        ll i = 0;
        ll res = 1;
        while (i < n) {
            ll j = i;
            while (j + 1 < n and a[j + 1] == a[j] + 1) {
                j += 1;
            }
            ll l = j - i + 1;
            if (l % 2 == 1) {
                res = (res * (l / 2 + 1)) % mod;
            }
            i = j + 1;
        }
        cout << res << "\n";
    }
    return 0;
}
