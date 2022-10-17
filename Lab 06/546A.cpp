
#include<iostream>
using namespace std;
int main(){

int k,n,w,d=0,m;
cin>>k>>n>>w;
for(int i=1;i<=w;i++){
  d=d+(i*k);

}
m=d-n;
if(m<=0){
 cout<<0;
}
else{
    cout<<m;
}

return 0;
}
 
