 #include<bits/stdc++.h>
 using namespace std;

 int sumRange(vector<int> nums1,int left, int right) {
        int arr[nums1.size()];
        int n=nums1.size(),sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums1[i];
            arr[i]=sum;
        }
        if(left==0)
            return arr[right];
        else
            return arr[right]-arr[left-1];
    }

    int main(){
    vector<int> v;
    int n,vt;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>vt;
    v.push_back(vt);
    }


   int v2=sumRange(v,2,5);

    cout<<v2<<" ";

    return 0;
    }
    //-2,0,3,-5,2,-1
