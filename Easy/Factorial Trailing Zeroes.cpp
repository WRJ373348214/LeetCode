class Solution {
public:
    int trailingZeroes(int n) {
        int count=0;
        while(n){
            count+=n/5;
            n/=5;
        }
        return count;
    }
};
/*
    思考n!末尾有几个零由什么决定？
    =》10=2*5,60=15*4,100=25*4,25=5*5
    =》与5和2的个数有关

    偶数必含有一个2的因子，2的个数远远多于5
    =>含有5的因子个数综合决定
    小心25,125...这些情况
                                            */
