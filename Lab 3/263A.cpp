#include<iostream>
using namespace std;
int main(){
int w,ar[10][10],i,j,x,y;
for(i=1;i<=5;i++){
    for(j=1;j<=5;j++){
       cin>>ar[i][j];
    }
}
for(i=1;i<=5;i++){
    for(j=1;j<=5;j++){
       if(ar[i][j]==1){
        x=i;
        y=j;
       }
       }
    }
w=abs(3-x)+abs(3-y);
cout <<w;
}
