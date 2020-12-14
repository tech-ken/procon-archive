#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main() {
  ll n, d, result = 0;
  cin >> n >> d;

  for (ll i = 0; i < n; i++) {
    ll x, y;
    cin >> x >> y;

    if (sqrt(x * x + y * y) <= d) {
      result++;
    }
  }

  cout << result << '\n';
}
