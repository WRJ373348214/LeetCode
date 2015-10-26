class Solution {
public:
    int reverse(int x) {
        bool flag=false;
        if(x<0){
            flag=true;
            x=-x;
        }
        int i=0;
        int result=0;
        int check=x%10;
        while(x){
            i++;
            int res=x%10;
            result=result*10+res;
            x/=10;
        }
        if( int( result/pow(10,i-1) ) != check)
            return 0;
        if(flag)
            result=-result;
        return result;
    }
};
