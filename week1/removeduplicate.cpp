#include<iostream>
using namespace std;

int removeDuplicate(int arr[],int n){
int i,j;
for(i=0,j=1;j<n;j++)
if(arr[i]!=arr[j]){
if(i+1==j)
i++;
else{
i++;
arr[i]=arr[j];
}
}
return i+1;
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
int newn=removeDuplicate(arr,n);
cout<<"\n";
for(int i=0;i<newn;i++)
{
cout<<arr[i]<<" ";
}
return 0;
}
