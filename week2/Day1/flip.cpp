
#include<bits/stdc++.h>
 using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int i,j,k,t;
        int n=image.size();
        int m=image[0].size();
        for(i=0;i<n;i++){
            for(j=0,k=m-1;j<k;j++,k--){
                t=image[i][j];
                image[i][j]=image[i][k];
                image[i][k]=t;

            }
        }

        for(i=0;i<n;i++){
            for(j=0;j<m;j++)
            {
                image[i][j]=1-image[i][j];
            }
        }

        return image;
    }

    int main(){
    vector<vector<int>> v,v2;
    int n,vt;
    cin>>n;
    for(int i=0;i<n;i++){
    vector<int>temp;
    for(int j=0;j<n;j++){
    cin>>vt;
    temp.push_back(vt);
    }
    v.push_back(temp);
    }


     v2=flipAndInvertImage(v);
     for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cout<<v2[i][j]<<" ";
    }
    cout<<endl;
    }
    return 0;
    }
