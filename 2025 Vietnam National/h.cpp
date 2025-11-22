#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n == 4 && k == 2)
            cout << "0110";
        else if (k == n - 1)
            for (int i = 0; i < n; i++)
                cout << (i > 0);
        else if (k == n)
            for (int i = 0; i < n; i++)
                cout << 1;
        else if (n % 4 == 2 && k * 2 + 2 == n)
            for (int i = 0; i < n; i++)
                cout << i / 2 % 2;
        else if (k == n - k)
            for (int i = 0; i < n; i++)
                cout << i % 2;
        else if (k > n - k)
        {
            for (int i = 0; i < n - k; i++)
            {
                cout << 0;
                if (i < n - k - 1)
                    for (int j = 0; j < k / (n - k - 1) + (i < k % (n - k - 1)); j++)
                        cout << 1;
            }
        }
        else
        {
            for (int i = 0; i <= k; i++)
            {
                if (i)
                    cout << 1;
                for (int j = 0; j < (n - k) / (k + 1) + (i < (n - k) % (k + 1)); j++)
                    cout << 0;
            }
        }
        cout << "\n";
    }
}
