#include<iostream>
using namespace std;
int main(){
int a,i,coun=0;
cin>>a;
string s;
cin>>s;
for(i=0;i<a;i++){
    if(s[i]==s[i+1]){
        coun++;
    }
}
cout<<coun;
return 0;
}
