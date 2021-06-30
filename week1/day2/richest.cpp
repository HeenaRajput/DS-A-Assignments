#include<iostream>
using namespace std;

void richest(int arr[][20],int n,int m){
int i,j,max=0,temp=0,ind;
for(i=0;i<n;i++){
temp=0;
for(j=0;j<m;j++){
temp+=arr[i][j];
}
if(temp>max){
max=temp;
ind=i;
}
}

cout<<"richest person is customer "<<ind+1;
}
int main(){
int n,m;
cin>>n;
cin>>m;
int arr[n][20];
for(int i=0;i<n;i++)
 for(int j=0;j<m;j++)
    cin>>arr[i][j];
richest(arr,n,m);

}
