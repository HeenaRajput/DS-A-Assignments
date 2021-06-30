#include<iostream>
#include<set>
#include<iterator>
#include<climits>
#include<unordered_map>
using namespace std;

void intersection1(int arr1[],int arr2[],int n,int m){
int i,j;
unordered_map<int,int>umap;
set<int> s;
for(i=0;i<n;i++){
umap[arr1[i]]=0;
}

for(i=0;i<n;i++){
umap[arr1[i]]++;
}

for(i=0;i<m;i++){
if(umap[arr2[i]])
s.insert(arr2[i]);
}

set<int>:: iterator it;
for(it=s.begin();it!=s.end();it++){
cout<<*it<<" ";
}
}

int main(){
int n,m;
cin>>n;
cin>>m;
int arr1[n],arr2[m];
for(int i=0;i<n;i++)
    cin>>arr1[i];
for(int j=0;j<m;j++)
 cin>>arr2[j];

intersection1(arr1,arr2,n,m);
return 0;
}
