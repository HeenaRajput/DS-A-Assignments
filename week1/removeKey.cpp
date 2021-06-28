#include<iostream>
using namespace std;

int removeKey(int arr[],int n,int key){
int i,j;
i=0;
j=n-1;
while(i<j){
if(arr[i]!=key){
i++;
}
else
{
arr[i]=arr[j];
j--;
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
cout<<"Enter key\n";
int key;
cin>>key;
int newn=removeKey(arr,n,key);
cout<<"\n";
for(int i=0;i<newn;i++)
{
cout<<arr[i]<<" ";
}
return 0;
}
