#include<iostream>>
using namespace std;
int main(){
int n,a,b,c,w=0;
cin>>n;
for(int i=0;i<n;i++){
int x=0,y=0,z=0,k;
    cin>>a>>b>>c;
    if(a==1)
        x++;
    if(b==1)
        y++;
    if(c==1)
        z++;
    k=x+y+z;
    if(k>=2)
        w++;
}
cout<<w;


return 0;
}
