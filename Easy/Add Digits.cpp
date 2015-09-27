class Solution {
public:
    int addDigits(int num) {
/*
 *X=fn*Xn+fn-1*Xn-1+...+f1*x1 , Xn=pow(10,n-1);
 *Every operator make X'=fn+fn-1+...1
 *   X-X' =fn*(Xn - 1)+fn-1*(Xn-1 - 1)+...f1*(X1 - 1)
 *        =fn*9···99+fn-1*9···9+..f1*0
 *        =9*(fn*1···11+fn-1*1···1+...f2*1+f1*0)=9*S(S is a non-negative integer)
 *Everytime reduce a number of multiple 9
 */
        if(num==0) return 0;
        int t=num%9;
        return (t!=0)?t:9;
    }
};
