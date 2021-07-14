class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>vt;
        vt.push_back(0);
        for(int i=1;i<=n;i++){
            int x=i,count=0;
            while(x!=0){
            count++;
            x &=(x-1);
        }
            vt.push_back(count);
        }
        return vt;
    }
};
