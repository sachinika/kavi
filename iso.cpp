#include <iostream>
using namespace std;
int main() 
{ string s1,s2;
  cout<<"enter strings";
  cin>>s1>>s2;
  int s=s1.length(),r=s2.length();
  if(s==r)
  { cout<<"strings are isomorphic";
  } else{ cout<<"strings are not isomorphic";}
  return 0;
  }
 
