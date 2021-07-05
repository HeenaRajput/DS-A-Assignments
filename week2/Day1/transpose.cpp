 #include<bits/stdc++.h>
 using namespace std;

 vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        vector<vector<int>> v;

        int i,j;
        int n=matrix.size();
        int m=matrix[0].size();

        for(i=0;i<m;i++){
            vector<int> v1;
            for(j=0;j<n;j++){
                v1.push_back(matrix[j][i]);

            }

            v.push_back(v1);
        }

        return v;
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


     v2=transpose(v);
     for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cout<<v2[i][j]<<" ";
    }
    cout<<endl;
    }
    return 0;
    }
