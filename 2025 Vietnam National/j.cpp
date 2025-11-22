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
const int maxn = 50;
/*_______________________SOLUTION IS HERE____________________________________*/

ll a[maxn + 5][maxn + 5];
ll tt;

int main() {
    fastio;
    file("main");

    cin >> tt;
    while (tt--) {
        ll n; cin >> n;
        REP(i, n) {
            REP(j, n) {
                cin >> a[i][j];
            }
        }
        ll cnt = 0;
        REP(u, n) {
            if (a[u][0] == 1) ++cnt;
        }
        printf("%d\n", cnt);
        REP(u, n) {
            if (a[u][0] == 1) {
                printf("%d %d\n", u, 0);
            }
        }
    }
    return 0;
}
