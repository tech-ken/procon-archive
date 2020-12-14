#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	ll ans = 0;
	int MaxNum = 0;
	for (int i = 0; i < n; i++)
	{
		MaxNum = max(MaxNum, a[i]);
		int temp = MaxNum;
		ans += temp - a[i];
	}

	cout << ans << endl;
}
