#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    int sum = 0, cnt = 1;
    while (true) {
        sum = sum * 10 + 7;
        sum %= k;
        if (sum == 0) {
            cout << cnt << endl;
            return 0;
        }
        if (cnt > k) {
            cout << -1 << endl;
            return 0;
        }
        cnt++;
    }
    return 0;
}
