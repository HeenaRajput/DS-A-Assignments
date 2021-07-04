 #include<bits/stdc++.h>
 using namespace std;

  int islandPerimeter(vector<vector<int>>& grid) {
        int i,j,perimeter=0;
        int n=grid.size();
        int m=grid[0].size();
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(grid[i][j]==1){
                    if(i+1==n ||grid[i+1][j]==0){
                        perimeter+=1;
                    }

                    if(i==0 ||grid[i-1][j]==0){
                        perimeter+=1;
                    }

                    if(j==0||grid[i][j-1]==0){
                        perimeter+=1;
                    }

                    if(j+1==m ||grid[i][j+1]==0){
                        perimeter+=1;
                    }

                }
            }
        }

        return perimeter;
    }

    int main(){
    vector<vector<int>> v;
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


    int v2=islandPerimeter(v);

    cout<<v2<<" ";

    return 0;
    }
