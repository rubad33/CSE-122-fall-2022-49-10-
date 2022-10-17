
#include<iostream>
#include<cstring>
 using namespace std;
 int main()
 {
 int i,l;
 string s;
 cin>>s;

 for(i=0; i<s.size(); i++)
 {
    char c=tolower(s[i]);
  if(c!='a'&& c!='e' && c!='i' && c!='o' && c!='u'&& c!='y')
  {
   cout<<"."<<c;
  }
 }
 }
