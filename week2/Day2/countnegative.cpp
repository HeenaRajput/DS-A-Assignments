 #include<bits/stdc++.h>
 using namespace std;

   int countNegatives(vector<vector<int>>& grid) {
       int i,j,count=0;
        int n=grid.size();
        int m=grid[0].size();

        for(i=0;i<n;i++){
            for(j=m-1;j>=0;j--){
                if(grid[i][j]<0)
                    count++;
                else
                    break;
            }
        }

        return count;
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


    int v2=countNegatives(v);

    cout<<v2<<" ";

    return 0;
    }
