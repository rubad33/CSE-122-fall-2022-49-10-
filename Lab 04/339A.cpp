#include<iostream>
using namespace std;
int main(){
int i,x=0,j;
string s;
cin>>s;
for(i=0;i<s.size();i++){
 for(j=i+2;j<s.size();j=j+2){
    if(s[i]>s[j]){
        x=s[i];
        s[i]=s[j];
        s[j]=x;
    }
 }
}
cout<<s;

return 0;
}
