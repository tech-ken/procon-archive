#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  vector<int> p(n);
  
  for (int i = 0; i < n; i++){
    cin >> p[i];
  }
  
  sort(p.begin(),p.end());
  
  int res = 0;
  for (int i = 0; i < k; i++){
    res += p[i];
  }
  cout << res << endl;
}