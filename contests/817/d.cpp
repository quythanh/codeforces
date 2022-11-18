#include <bits/stdc++.h>
#define ll long long
#define FOR(i, n) for (ll i = 0; i < n; i++)

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        string s, sMax;
        cin >> n >> s;

        vector<ll> a(n);

        FOR(i, n / 2) sMax += 'R';
        FOR(i, n / 2 + 1) sMax += 'L';

        ll l = 0, r = n - 1,
            c = 0, total = 0;
        FOR(i, n) total += (s[i] == 'R')*(n-1 - i) + (s[i] == 'L')*i;


        FOR(k, n) {
            while (l <= r && c < k + 1)
                if (abs(l - n / 2) > abs(r - n / 2)) {
                    if (s[l] != sMax[l]) {
                        c++;
                        s[l] = 'R';
                        total += n-1-l-l;
                    }
                    l++;
                } else {
                    if (s[r] != sMax[r]) {
                        c++;
                        s[r] = 'L';
                        total += r+r-n+1;
                    }
                    r--;
                }
            cout << total << ' ';
        }
        cout << '\n';
    }
}