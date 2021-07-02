 #include<bits/stdc++.h>
 using namespace std;

 int heightChecker(vector<int>& heights) {
        vector<int> v=heights;

        sort(v.begin(),v.end());
        int i,count=0;
        int n=heights.size();
        for(i=0;i<n;i++){
            if(heights[i]!=v[i])
                count++;
        }

      return count;
    }

    int main(){
    vector<int> v;
    int n,vt;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>vt;
    v.push_back(vt);
    }


   int v2=heightChecker(v);

    cout<<v2<<" ";

    return 0;
    }
