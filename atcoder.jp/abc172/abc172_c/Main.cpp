#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
typedef long long ll;

ll a[N];
ll b[N]; 
int main() {
    ll n, m, k;
    cin >> n >> m >> k;
    // 注意桌子上的书可以一本不拿，所以从 1 开始赋值
    for (ll i = 1; i <= n; i++) scanf("%lld", &a[i]), a[i] += a[i - 1];
    for (ll i = 1; i <= m; i++) scanf("%lld", &b[i]), b[i] += b[i - 1];
    ll ans = 0;
    for (ll i = 0; i <= n; i++)
        if (a[i] <= k)
            ans = max(ans, i + upper_bound(b + 1, b + 1 + m, k - a[i]) - b - 1ll);
    cout << ans << endl;
    return 0;
}


