
#include<iostream>
 using namespace std;
int main()
{
    int a=0,i,j,f=0;
    string s;
    cin>>s;
    for(i=0;s[i]!='\0';i++){
        for(j=i-1;j>=0;j--){


            if(s[i]==s[j]){
             f=1;
             break;}

        }
        if(f==0){
            a++;
            f=0;
        }
        else if(f==1){
            f=0;
        }
        }
     if(a%2==0){
        cout<<"CHAT WITH HER!";
     }
     else{
     cout<<"IGNORE HIM!";
     }
}
