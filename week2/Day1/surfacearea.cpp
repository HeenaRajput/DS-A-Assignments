
#include<bits/stdc++.h>
 using namespace std;


int surfaceArea(vector<vector<int>>& grid) {
       int res=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(grid[i][j]>0)
                    res+=grid[i][j]*4+2;
                if(i>0)
                    res-=min(grid[i][j],grid[i-1][j])*2;
                if(j>0)
                    res-=min(grid[i][j],grid[i][j-1])*2;
            }
        }

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


     int v2=surfaceArea(v);

    cout<<v2<<endl;

    return 0;
    }
