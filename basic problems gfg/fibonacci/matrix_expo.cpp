#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL MOD = 1e9 + 7;
using VL = vector<LL>;
using ML = vector<VL>;
ML operator * (const ML &a, const ML &b) {
    ML ret(2, VL(2, 0));
    for (int i = 0 ; i < 2 ; i++)
        for (int j = 0 ; j < 2 ; j++)
            for (int k = 0 ; k < 2 ; k++)
                (ret[i][j] += a[i][k] * b[k][j] % MOD) %= MOD;
    return ret;
}
ML fpow(auto &A, LL n) {
    if (n == 0) return {{1, 0}, {0, 1}};
    ML k = fpow(A, n >> 1);
    if (n % 2)
        return k * k * A;
    return k * k;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    LL n; cin >> n;
    ML A = {{1, 1}, {1, 0}};
    ML res = fpow(A, n);
    cout << res[1][0] << '\n';
}
