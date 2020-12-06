#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int N;
  cin>>N;

  ll ans=0;
  for (int i=1;i<N;i++)
    ans+=(N-1)/i;

  cout<<ans<<endl;
  return 0;
}
