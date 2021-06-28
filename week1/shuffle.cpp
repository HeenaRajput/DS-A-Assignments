#include<iostream>
using namespace std;

void shuffle(int arr[],int n,int a[]){
int i=0,j;
for(j=0;j<n/2;j++)
{
a[i++]=arr[j];
a[i++]=arr[j+(n/2)];
}
}

int main(){
int n;
cin>>n;
int arr[n],a[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
shuffle(arr,n,a);
cout<<"\n";
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
return 0;
}
