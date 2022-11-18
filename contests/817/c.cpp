#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        map<string, int> m;

        cin >> n;
        vector<string> a(n), b(n), c(n);
        
        for (string &i : a) {
            cin >> i;
            m[i]++;
        }
        for (string &i : b) {
            cin >> i;
            m[i]++;
        }
        for (string &i : c) {
            cin >> i;
            m[i]++;
        }
        
        // =======================
        int r = 0;
        for (string i : a)
            r += (m[i] == 2) + (m[i] == 1)*3;
        cout << r << " ";
        
        r = 0;
        for (string i : b)
            r += (m[i] == 2) + (m[i] == 1)*3;
        cout << r << " ";
        
        r = 0;
        for (string i : c)
            r += (m[i] == 2) + (m[i] == 1)*3;
        cout << r << "\n";
    }
}