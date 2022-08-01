#include<iostream>
using namespace std;
int main(){
string  s,x;
int p=0,q=0,m;
cin >>s>>x;
m=s.size();
for(int i=0;i<m;i++){
    s[i]=towlower(s[i]);
    x[i]=towlower(x[i]);
    if(s[i]==x[i]){
        p++;
    }
    else if(s[i]>x[i]){
        cout<<"1";
        break;
    }
    else if(s[i]<x[i]){
        cout<<"-1";
        break;
    }
}
if(p==m){
    cout <<"0";
}
}
