 #include<bits/stdc++.h>
 using namespace std;

 int peakIndex(vector<int>& arr) {
        int i,j;

        for(i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1])
                return i;
        }
        return i;
    }

    int main(){
    vector<int> v;
    int n,vt;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>vt;
    v.push_back(vt);
    }


    int v2=peakIndex(v);

    cout<<v2<<" ";

    return 0;
    }
