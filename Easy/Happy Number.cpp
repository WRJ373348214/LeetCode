class Solution {
public:
    bool isHappy(int n) {
        int record[2000]={0};
        while(n!=1){
            int sum=0;
            while(n>0){
               int t=n%10;
               sum+=t*t;
               n/=10;
            }
            if(record[sum]==1)
                return false;
            else{
                n=sum;
                record[sum]=1;
            }
        }
        return true;
    }
};
