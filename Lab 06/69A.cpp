
#include<iostream>
using namespace std;
int main (){
int a,x,y,z,sum=0,sum1=0,sum2=0;
cin>>a;
for(int i=1;i<=a;i++){
    cin>>x>>y>>z;
    sum+=x;
    sum1+=y;
    sum2+=z;
}
if(sum==0&&sum1==0&&sum2==0){
    cout<<"YES";
}
else{
   cout<<"NO";
}


return 0;
}
