
#include<iostream>
#include<climits>
using namespace std;

int goodpairs(int arr[],int n){
int i,j,count=0;
for(i=0;i<n-1;i++){
for(j=i+1;j<n;j++){
if(arr[i]==arr[j])
{
cout<<i<<" "<<j<<endl;
count++;
}
}
}
return count;
}

int main(){
int n,m;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
int count=goodpairs(arr,n);
cout<<"Total good pairs are "<<count<<endl;
return 0;

}
