
#include <iostream>
using namespace std;
int main()
{
    int s,n,i;
    int d;
   cin>>n;
    if(1<=n && n<=1000000)
    {
    s=n/5;
   if(n<=5)
   cout<<"1"<<endl;
 else if(5*s!=n)
  {
      d=s+1;
    cout<<d<<endl;
  }
  else if(5*s==n)
  {
   cout<<s<<endl;
  }
    }
    return 0;
}
