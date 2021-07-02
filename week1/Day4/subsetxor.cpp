 #include<bits/stdc++.h>
 using namespace std;

 int subsetXORSum(vector<int>& nums) {
        int i,j,k,result=0,temp;
        int n=nums.size();


        int count=pow(2,n);
        for(i=0;i<count;i++){
            temp=0;
            for(j=0;j<n;j++){

              if((i&(1<<j))>0){
                    temp=temp^nums[j];
            }
            }
                result+=temp;
        }

        return result;
    }

    int main(){
    vector<int> v;
    int n,vt;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>vt;
    v.push_back(vt);
    }


   int v2=subsetXORSum(v);

    cout<<v2<<" ";

    return 0;
    }
