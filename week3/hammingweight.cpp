class Solution {
public:
    int hammingWeight(uint32_t n) {
       int count=0;
        while(n!=0){
            count++;
            n &=(n-1);
            cout<<n<<endl;
        }
        return count;
    }
};
