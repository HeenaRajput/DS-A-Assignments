 #include<bits/stdc++.h>
 using namespace std;
vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {

        vector<int>res;
        vector<pair<int,int>> vp;
        int i,j;

        int n=mat.size();
        int m=mat[0].size();
        for(i=0;i<n;i++){
            int count=0;
            for(j=0;j<m;j++){
                if(mat[i][j]==1)
                    count++;
                else
                    break;
            }

            vp.push_back(make_pair(count,i));
        }

        sort(vp.begin(),vp.end());
        for(i=0;i<k;i++){
            res.push_back(vp[i].second);
        }

        return res;
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


    v2=kWeakestRows(v,2);

     for(int i=0;i<n;i++)
    cout<<v2[i]<<" ";

    return 0;
    }
