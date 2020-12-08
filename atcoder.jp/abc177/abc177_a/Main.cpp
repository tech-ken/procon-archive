#include <bits/stdc++.h>
using namespace std;

int main() {
	int D, T, S;
	cin >> D >> T >> S;
  
	int dist = S * T;

	if (dist >= D) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}


