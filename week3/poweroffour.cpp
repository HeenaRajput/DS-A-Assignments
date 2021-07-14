class Solution {
public:
    bool isPowerOfFour(int n) {
        int i,j,count=0;
        if(n==1)return true;
        if(n<=0)return false;
        if((n&(n-1))==0)
        {
            int x=n;
          while((x&1)==0){
              x=x>>1;
              count++;
          }
            if(count%2==0)
                return true;

        }
        return false;
    }
};
