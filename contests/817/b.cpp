#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string a, b;

        cin >> n >> a >> b;
        bool f = false;

        for (int i = 0; i < n; i++) {
            if (a[i] != b[i] && (a[i] == 'R' || b[i] == 'R')) {
                cout << "NO\n";
                f = 1;
                break;
            }
        }
        if (!f)
            cout << "YES\n";
    }
}