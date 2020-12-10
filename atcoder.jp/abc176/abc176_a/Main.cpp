#include <bits/stdc++.h>

using namespace std;

int main(){
  
 int n,x,t;
  cin >> n >> x >> t;
  
  int time = (n+x-1)/x;
  int ans = time*t;
  cout  << ans << endl;
}

