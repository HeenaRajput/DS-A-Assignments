 #include<bits/stdc++.h>
 using namespace std;

 vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        int n=nums.size(),count=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            count=0;
            for(int j=0;j<n;j++){
                if(nums[i]>nums[j])
                    count++;
            }
            v.push_back(count);
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

    v2=smallerNumbersThanCurrent(v);

    for(int i=0;i<v2.size();i++){
    cout<<v2[i]<<" ";
    }
    return 0;
    }

