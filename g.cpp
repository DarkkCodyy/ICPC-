#include <bits/stdc++.h>

#define      FOR(i, a, b)     for (int i = (a), _##i = (b); i <= _##i; ++i)
#define      FORD(i, a, b)    for (int i = (a), _##i = (b); i >= _##i; --i)
#define      REP(i, a)        for (int i = 0, _##i = (a); i < _##i; ++i)
#define      fastio           ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define      file(name)       if (fopen (name".inp", "r")) { freopen (name".inp", "r", stdin); freopen (name".out", "w", stdout); }

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const ll mod = 1e9 + 7;
const ll maxn = 3e5 + 5;
/*_______________________SOLUTION IS HERE____________________________________*/


ll n, q, bit[maxn][2];

void add (ll i, ll val, ll id) {
    for (; i > 0; i -= i & -i) bit[i][id] += val;
}

ll get (ll i, ll id) {
    ll res = 0;
    for (; i <= n; i += i & -i) res += bit[i][id];
    return res;
}

set<pair<pair<ll, ll>, char>> pq;

int main() {
    fastio;
    file("main");

    cin >> n >> q;

    pq.insert({{1, n}, 'A'});
    add(n, n, 0LL);
    add(n, 1LL, 1LL);

    while (q--) {
        ll t; cin >> t;

        if (t == 2) {
            ll k;
            cin >> k;
            assert(get(1, 0) == n);
            cout << get(k + 1, 0) - get(k + 1, 1) * k << '\n';
            continue;
        }

        ll l, r;
        char c;
        cin >> l >> r >> c;
        ++l, ++r;

        ll l1 = l, r1 = r;

        while (true) {
            auto it = pq.lower_bound({{r, n + 1}, 'Z'});

            if (it == pq.begin()) break;

            --it;

            ll u = (*it).first.first, v = (*it).first.second;
            char c1 = (*it).second;

            if (v < l) {
                if (c1 == c) {
                    l1 = u;
                    add(v - u + 1, -(v - u + 1), 0);
                    add(v - u + 1, -1, 1);
                    pq.erase(it);
                } 
                break;
            }

            add(v - u + 1, -(v - u + 1), 0);
            add(v - u + 1, -1, 1);

            if (c1 == c) {
                if (v > r) r1 = v;
                if (u < l) l1 = u;
            }
            else {
                if (v > r) {
                    add(v - r, v - r, 0);
                    add(v - r, 1, 1);
                    pq.insert({{r + 1, v}, c1});
                }

                if (u < l) {
                    add(l - u, l - u, 0);
                    add(l - u, 1, 1);
                    pq.insert({{u, l - 1}, c1});
                }
            }

            pq.erase(it);
        }

        auto it = pq.lower_bound({{r, n + 1}, 'Z'});
        if (it != pq.end()) {
            ll u = (*it).first.first, v = (*it).first.second;
            char c1 = (*it).second;

            if (c1 == c) {
                r1 = v;
                add(v - u + 1, -(v - u + 1), 0);
                add(v - u + 1, -1, 1);
                pq.erase(it);
            }
        }

        add(r1 - l1 + 1, r1 - l1 + 1, 0);
        add(r1 - l1 + 1, 1, 1);

        pq.insert({{l1, r1}, c});

        // for (auto it : pq) cout << it.first.first << ' ' << it.first.second << ' ' << it.second << '\n';

        // cout << '\n';
    }
    return 0;
}
