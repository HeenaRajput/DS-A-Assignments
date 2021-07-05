#include<bits/stdc++.h>
 using namespace std;

 bool isToeplitzMatrix(vector<vector<int>>& matrix) {

        int i,j;
        int n=matrix.size();
        int m=matrix[0].size();
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(i>0 && j>0 && matrix[i-1][j-1]!=matrix[i][j])
                    return false;
            }
        }

        return true;

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


     int v2=isToeplitzMatrix(v);

    cout<<v2<<endl;

    return 0;
    }
