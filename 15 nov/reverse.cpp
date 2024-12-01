#include <iostream>
using namespace std;
int main()
{
  int n;
  int rev=0;
  int r=0;
  cout<<"enter n";
  cin>>n;
  for(int i=0;n>0;++i){
    r=n%10;
    rev=rev*10+r;
    n=n/10;
 

  }
  cout<<rev;

}