class Solution {
public:
    //运行后不到8ms，才打败5.3%，不服
    uint32_t reverseBits(uint32_t n) {
        uint32_t t=2147483648;
        stack<char> sta;
        for(int i=0;i<32;i++){
            if(n&t)
                sta.push('1');
            else
                sta.push('0');
            n<<=1;
        }
        uint32_t r=0;
        while(sta.size()){
            char c=sta.top();
            sta.pop();
            r<<=1;
            r|=c-'0';
        }
        return r;
    }

    //第二个思路，一样的8ms
     uint32_t reverseBits(uint32_t n) {
        uint32_t t=2147483648;
        int bit[32]={1};
        for(int i=1;i<32;i++)
            bit[i]=bit[i-1]*2;
        int result=0;
        for(int j=0;j<32;j++){
            if(n&t&&n)
                result+=bit[j];
            n<<=1;
        }
        return result;
    }
    //   在discuss看到的4ms
    //   solution1、solution2都是
    //   为什么类似的思路会造成运行的时间相差了一倍？
    // =>移位操作比乘二操作效率更高！(汇编的作用!)
    uint32_t reverseBits(uint32_t n) {
        int count = 31;
        return solution2(n, count);
    }

    uint32_t solution1(uint32_t n){
        int count = 32;
        int num = 0;
        while(n){
            num <<= 1;
            num |= n & 1;
            n >>= 1;
            count--;
        }
        return num << count;
    }
    uint32_t solution2(uint32_t n, int count){
        if(!n) return 0;
        return ((n & 1) << count) + solution2(n >> 1, count-1);
    }
};
