#include<bits/stdc++.h>
 using namespace std;

vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int i,j;
        int n=grid.size();
        int m=grid[0].size(),first,first2;
        vector<vector<int>> vt;
        int arr[n][m],arr2[n][m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++)
                arr2[i][j]=grid[i][j];

        }

        if(k==0)
            return grid;
        while(k--){
            for(i=0;i<n;i++){

                for(j=0;j<m-1;j++){
                  arr[i][j+1]=arr2[i][j];
                }

            }

            for(i=0;i<n-1;i++)
                arr[i+1][0]=arr2[i][m-1];

            arr[0][0]=arr2[n-1][m-1];



            for(i=0;i<n;i++){
            for(j=0;j<m;j++)
                arr2[i][j]=arr[i][j];
        }

        }

        for(i=0;i<n;i++){
            vector<int> v1;
            for(j=0;j<m;j++)
                v1.push_back(arr[i][j]);
            vt.push_back(v1);
        }


        return vt ;
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


     v2=shiftGrid(v,1);
     for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cout<<v2[i][j]<<" ";
    }
    cout<<endl;
    }


    return 0;
    }
