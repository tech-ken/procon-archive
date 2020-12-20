#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int h,w,k;
  cin>>h>>w>>k;
 
  vector<vector<char>>c(h,vector<char>(w));
  for (int i=0;i<c.size();i++)
    for (int j=0;j<c.at(i).size();j++)
      cin>>c.at(i).at(j);
 
  int ans=0;
  for (int maskR=0;maskR<(1<<h);maskR++)
    for (int maskC=0;maskC<(1<<w);maskC++){
      int black=0;
      for (int i=0;i<h;i++)
	for (int j=0;j<w;j++)
	  if (((maskR>>i)&1)==0 && ((maskC>>j)&1)==0 && c.at(i).at(j)=='#')
	    black++;
      if (black==k)
	ans++;
    }
 
  cout<<ans<<endl;
  return 0;
}