#include<bits/stdc++.h>
 using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

        int arr[r][c];
       int i,j;

        int n=mat.size(),k=0,l=0;
        int m=mat[0].size();

        int a[n*m];

        for(i=0;i<n;i++){
            for(j=0;j<m;j++)
                a[k++]=mat[i][j];
        }

        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(l-1<k-1){
                arr[i][j]=a[l++];
                if((i!=r-1 && j!=c-1) && l==k)
                    return mat;
                if(i==r-1 && j==c-1 && l!=k)
                    return mat;
                }
                else
                    return mat;
            }

        }

            vector<vector<int>> v;
            for(i=0;i<r;i++){
                vector<int>v1;
                for(j=0;j<c;j++)
                    v1.push_back(arr[i][j]);
               v.push_back(v1);
            }
        return v;
    }


     int main(){
    vector<vector<int>> v,v2;
    int n,vt,m;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
    vector<int> temp;
    for(int j=0;j<m;j++){
    cin>>vt;
    temp.push_back(vt);
    }
    v.push_back(temp);
    }


    v2=matrixReshape(v,1,1);

    for(int i=0;i<v2.size();i++){
    for(int j=0;j<v2[0].size();j++)
    cout<<v2[i][j]<<" ";
    cout<<endl;

    }



    return 0;
    }
