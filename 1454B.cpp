#include<bits/stdc++.h>
using namespace std;
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n],arr1[n];

for(int i=0;i<n;i++){
cin>>arr[i];
arr1[i]=arr[i];
}
int x=0;
sort(arr,arr+n);

for(int i=0;i<n;i++){
if(i==0){
    if(arr[i]!=arr[i+1]){
        x=arr[i];
break;
    }
}
else if(i==(n-1)){
     if(arr[i]!=arr[i-1]){
        x=arr[i];
break;
    }
}
else if(arr[i]!=arr[i-1]&&arr[i]!=arr[i+1]){
x=arr[i];
break;
}
}
if(x==0){
cout<<"-1"<<endl;
}
else {
for(int i=0;i<n;i++){
if(x==arr1[i]){
cout<<i+1<<endl;
break;
}

}
}





}











return 0;
}
