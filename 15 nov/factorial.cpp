#include <iostream>
using namespace std;
int main()
{
 int n;
 cout<<"enter n";
 cin>>n;
 for(int i=1;i<=n;++i){
    if(n%i==0)
    {
        cout<<"divisible by"<<i<<endl;
    }
 }
}