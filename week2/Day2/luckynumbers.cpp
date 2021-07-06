 #include<bits/stdc++.h>
 using namespace std;

 vector<int> luckyNumbers (vector<vector<int>>& matrix) {

        int i,j,k,ind;
        vector<int> v;
        int n=matrix.size();
        int m=matrix[0].size();
        for(i=0;i<n;i++){
            int minm=INT_MAX;
            int maxm=INT_MIN;
            for(j=0;j<m;j++){
                if(matrix[i][j]<minm){
                    minm=matrix[i][j];
                    ind=j;
                }
            }

            for(k=0;k<n;k++){
              if(matrix[k][ind]>maxm)
                  maxm=matrix[k][ind];
            }

            if(minm==maxm)
                v.push_back(maxm);
        }

        return v;
    }

    int main(){
    vector<vector<int>> v;
    vector<int>v2;
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


    v2=luckyNumbers(v);

     for(int i=0;i<v2.size();i++)
    cout<<v2[i]<<" ";

    return 0;
    }
