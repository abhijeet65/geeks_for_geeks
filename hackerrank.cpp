#include <bits/stdc++.h>

using namespace std;

int cnt[110];
long long fact[110];
int main() {
    fact[0] = 1;
    for (int i = 1; i < 20; i++) {
        fact[i] = fact[i - 1]*i;
    }
    int n;
    cin >> n;
    assert(2 <= n && n <= 18);
    vector<int> a, b;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        assert(1 <= x && x <= 100);
        cnt[x]++;
        a.push_back(x);
    }
    b = a;
    sort(b.begin(), b.end() );
    long long ans = fact[n];
    if (a == b) {
        ans = 0;
    }
    else {
        for (int i = 1; i <= 100; i++) {
            ans /= fact[ cnt[i] ];
        }
    }
    cout << ans;
    cout << ".000000" << endl;
    return 0;
}