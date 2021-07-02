 #include<bits/stdc++.h>
 using namespace std;

 vector<int> decodethearray(vector<int>& encoded, int first) {

        int i,j,n=encoded.size();
        vector<int> v;
        int xx=first;
        v.push_back(xx);
        for(i=0;i<n;i++){
            int x=xx^encoded[i];
            v.push_back(x);
            xx=x;
        }
     return v;
    }

    int main(){
    vector<int> v;
    vector<int> v2;
    int n,vt,f;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>vt;
    v.push_back(vt);
    }

    cin>>f;

    v2=decodethearray(v,f);

    for(int i=0;i<v2.size();i++){
    cout<<v2[i]<<" ";
    }
    return 0;
    }
