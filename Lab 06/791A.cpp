
#include<iostream>
using namespace std;
int main(){
int i,a,b,x=0,y=0;
cin>>a>>b;
for(i=1;i<=10;i++){
    a=a*3;
    b=b*2;
    if(a>b){
        cout<<i;
        break;
    }
}

return 0;
}
