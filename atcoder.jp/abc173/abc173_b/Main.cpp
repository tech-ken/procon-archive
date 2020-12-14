#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ll n;
    cin >> n;
    map<string,ll> freq;
    for(ll i = 0 ; i < n ; i++) {
        string a;
        cin >> a;
        freq[a]++;
    }
    cout << "AC x" << ' ' << freq["AC"] << endl;
    cout << "WA x" << ' ' << freq["WA"] << endl;
    cout << "TLE x" << ' ' << freq["TLE"] << endl;
    cout << "RE x" << ' ' << freq["RE"] << endl;

}
