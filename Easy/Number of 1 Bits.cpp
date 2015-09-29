class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        uint32_t flag=1;
        while(n>0){
            if(n&flag==1)
                count++;
            n>>=1;
        }
        return count;
    }
};
