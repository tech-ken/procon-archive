#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin>>N;
  
  vector <pair<int,int>>D(N,make_pair(0,0));
  for (int i=0;i<N;i++){
    int first,second;
    cin>>first>>second;
    D.at(i)=make_pair(first,second);
  }

  for (int i=0;i<N-2;i++){
    if (D.at(i).first==D.at(i).second && D.at(i+1).first==D.at(i+1).second && D.at(i+2).first==D.at(i+2).second){
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}
