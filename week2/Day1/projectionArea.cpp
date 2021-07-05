#include<bits/stdc++.h>
 using namespace std;

int projectionArea(vector<vector<int>>& grid) {

        int x=0,y=0,z=0;
        int n=grid.size();
        int m=grid[0].size(),i,j;
        for(i=0;i<n;i++){
            int mx=0;
            for(j=0;j<m;j++){
                if(grid[i][j]>mx)
                    mx=grid[i][j];
                if(grid[i][j]>0)
                    z++;

            }
            y+=mx;
        }

            for(j=0;j<m;j++){
                int mx=0;
                for(i=0;i<n;i++)
                {
                    if(grid[i][j]>mx)
                        mx=grid[i][j];
                }

                x+=mx;
            }
        int res=x+y+z;
        return res;


    }

    int main(){
    vector<vector<int>> v;
    int n,vt,m;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
    vector<int>temp;
    for(int j=0;j<m;j++){
    cin>>vt;
    temp.push_back(vt);
    }
    v.push_back(temp);
    }


     int v2=projectionArea(v);

    cout<<v2<<endl;

    return 0;
    }
