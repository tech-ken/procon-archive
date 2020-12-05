#include <bits/stdc++.h>
using namespace std;
 
int main(){
	cout << fixed << setprecision(15);

	int n;
	cin >> n;
	vector<int>x(n);
	for(int i=0;i<n;i++){
      cin >> x[i];
    }

	long manhatan=0;
	for(int i=0;i<n;i++){
      manhatan += abs(x[i]);
    }

	long yucrid=0;
	for(int i=0;i<n;i++){
      yucrid+=abs(x[i])*(long)abs(x[i]);
    }

	int chebi=0;
	for(int i=0;i<n;i++){
      chebi = max(chebi,abs(x[i]));
    }
  
  cout << manhatan << endl;
  cout << sqrt(yucrid) << endl;
	cout << chebi << endl;
}
