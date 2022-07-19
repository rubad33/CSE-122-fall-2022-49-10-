#include<iostream>
#include<string>
using namespace std;
int main(){
int n,k,s[101],coun=0;

cin>>n>>k;
for(int i=0;i<n;i++){
    cin>>s[i];
}
for(int i=0;i<n;i++){
    if(s[i]>=s[k-1]&&s[i]!=0){
        coun++;
    }
}
cout<<coun;


return 0;
}
