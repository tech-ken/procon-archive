#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N;
  cin>>N;

  vector<int> digit(3,0);
  int k=0;
  while (N){
    digit.at(N%10%3)++;
    k++;
    N/=10;
  }

  int ans=0;
  int reminder=(digit.at(1)+2*digit.at(2))%3;
  if (reminder==1){
    if (digit.at(1)){
      if (k==1)
	ans=-1;

      else
	ans=1;
    }

    else if (digit.at(2)){
      if (k==2)
	ans=-1;

      else
	ans=2;
    }
  }

  if (reminder==2){
    if (digit.at(2)){
      if (k==1)
	ans=-1;

      else
	ans=1;
    }

    else if (digit.at(1)){
      if (k==2)
	ans=-1;

      else
	ans=2;
    }
  }

  cout << ans << endl;
  
  return 0;
}
