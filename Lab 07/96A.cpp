
#include<iostream>

using namespace std;
int main(){
string s;
int x=0,y=0;
cin>>s;

for(int i=0;i<s.size();i++){

    if(s[i]=='0'){
        x++;

    }

    else if(x<7){
         x=0;
           }
}

for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
        y++;

    }
    else if(y<7){

        y=0;
    }
}

if(y>=7||x>=7){
    cout<<"YES";
}
else{
    cout<<"NO";
}

return 0;}
