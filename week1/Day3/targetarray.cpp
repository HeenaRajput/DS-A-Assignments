 #include<bits/stdc++.h>
 using namespace std;

 vector<int> target(vector<int>& arr1, vector<int>& arr2) {
        vector<int> v;
        int n=arr1.size();
        for(int i=0;i<n;i++){
            v.insert(v.begin()+arr2[i],arr1[i]);
        }

        return v;
    }

    int main(){
    vector<int> v;
    vector<int> v2;
    vector<int> v3;
    int n,vt;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>vt;
    v.push_back(vt);
    }
    for(int i=0;i<n;i++){
    cin>>vt;
    v2.push_back(vt);
    }

    v3=target(v,v2);

    for(int i=0;i<v3.size();i++){
    cout<<v3[i]<<" ";
    }
    return 0;
    }
