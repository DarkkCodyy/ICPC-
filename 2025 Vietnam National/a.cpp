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

ll n;

int main() {
    fastio;
    file("main");

    cin >> n;

    if (n == 1) {
        cout << "Uphold integrity and ethics throughout the contest.";
    }
    else if (n == 2) {
        cout << "Do not seek or receive external help from people, platforms, tools or AI.";
    }
    else if (n == 3) {
        cout << "Follow all ICPC rules and guidelines, accept decisions made by organizers and judges as final.";
    }
    else if (n == 4) {
        cout << "Show good sportmanship and treat competitors, volunteers, staff and judges with respect.";
    }
    else if (n == 5) {
        cout << "Compete with creativity and teamwork, honor the contest spirit and pursue excellence.";
    }
    return 0;
}
