 #include<bits/stdc++.h>
 using namespace std;


 vector<int> decompress(vector<int>& arr) {

        vector<int>v;
        int i=0,n=arr.size(),j;
        while((2*i+1)<n){
            int x=2*i;
            int y=2*i+1;
            for(j=0;j<arr[x];j++)
                v.push_back(arr[y]);
            i++;
        }

        return v;
    }

     int main(){
    vector<int> v;
    vector<int> v2;
    int n,vt;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>vt;
    v.push_back(vt);
    }

    v2=decompress(v);

    for(int i=0;i<v2.size();i++){
    cout<<v2[i]<<" ";
    }
    return 0;
    }
