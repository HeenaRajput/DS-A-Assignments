#include<iostream>
#include<climits>
using namespace std;

void highesttoffees(int arr[],int n,int k){
int i,j,maxm=INT_MIN,temp=0,ind;
bool a[n];
for(i=0;i<n;i++){
if(maxm<arr[i])
maxm=arr[i];
}
cout<<maxm<<endl;

for(i=0;i<n;i++){
if(arr[i]+k>=maxm)
a[i]=true;
else
a[i]=false;

}
for(j=0;j<n;j++)
cout<<a[j]<<" ";
}
int main(){
int n,m;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
int k;
cin>>k;
highesttoffees(arr,n,k);

}
