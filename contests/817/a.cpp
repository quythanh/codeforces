#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> a(100, 0);
    a['T' - 'A']++;
    a['i' - 'A']++;
    a['m' - 'A']++;
    a['u' - 'A']++;
    a['r' - 'A']++;
    int t;
    cin >> t;

    while (t--) {
        int n;
        string name;
        vector<int> b(100, 0);
        cin >> n >> name;

        if (n != 5) {
            cout << "NO\n";
            continue;
        }

        for (int i = 0; i < 5; i++)
            b[name[i] - 'A']++;
        
        bool f = false;
        for (int i = 0; i < 100; i++)
            if (b[i] != a[i]) {
                cout << "NO\n";
                f = !f;
                b.clear();
                break;
            }
        if (!f)
            cout << "YES\n";
        b.clear();
    }
}