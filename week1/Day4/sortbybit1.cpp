 #include<bits/stdc++.h>
 using namespace std;

 vector<int> sortByBits(vector<int>& arr) {
       vector<int> v;
        vector<pair<int,int>> vp;
        int i,j,n=arr.size();
        sort(arr.begin(),arr.end());
        for(i=0;i<n;i++){
            int b[32];
            int temp=arr[i],k=0,c=0;
            while(temp>0){
                b[k++]=temp%2;
                temp=temp/2;
            }

            for(int j=0;j<k;j++){
                if(b[j]==1)
                 c++;
            }

            vp.push_back(make_pair(c,arr[i]));
        }

        sort(vp.begin(),vp.end());

        for(i=0;i<vp.size();i++)
        {
          v.push_back(vp[i].second);
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


    v2=sortByBits(v);

    for(int i=0;i<v2.size();i++){
    cout<<v2[i]<<" ";
    }
    return 0;
    }
