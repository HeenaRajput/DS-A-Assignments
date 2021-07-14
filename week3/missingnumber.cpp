class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0,maxm=INT_MIN,n=nums.size();
            int sum=0,flag=0;
        for(i=0;i<n;i++){
            int flag=0;
            for(int j=0;j<n;j++){
                if(nums[j]==i)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                return i;
        }
        return i;
    }
};
