#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using int64 = int64_t;

int main (){
  
 int64 n;
  cin >> n;
  int64 ans = 0;
  
  for (int64 i = 0; i <n; i++){
    int64 a,b;
    cin >> a >> b;
    ans += b*(b+1)/2-a*(a-1)/2;
  }
  cout << ans << endl; 
}
