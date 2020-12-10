#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int n;
  cin >> n;
  
  vector<int> list(n);
  for (int i=0;i<n; i++){
    cin >> list[i];
  }
    sort(list.begin(), list.end() );
  
  int ans = 0;
  for (int i = 0; i<n; ++i){
    for(int j = 0; j<i; ++j){
      for (int k = 0; k<j; ++k){
        if(list[k] != list[j] and list[i] != list[j] and list[k] + list[j] > list[i]){
        ans++;
        }
      }
    }
  }
cout << ans << endl;
}