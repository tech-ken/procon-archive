#include <bits/stdc++.h>

using namespace std;

int main(){
  
 string s ;
 cin >> s;
  
 int len = s.length();
  if (s[len-1] == 's'){
   s += "es"; 
  }else{
    
   s += "s"; 
  }
  cout << s;

}

