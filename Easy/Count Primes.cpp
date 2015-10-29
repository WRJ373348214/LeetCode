class Solution {
public:
    int countPrimes(int n) {
        bool isPrimes[100000];
        for(int i=2;i<n;i++)
            isPrimes[i]=true;
        isPrimes[0]=isPrimes[1]=false;
        int count=0;
        for(int i=2;i<n;i++){
            if(isPrimes[i]){
                count++;
                for(int j=i+i;j<n;j+=i)
                    isPrimes[j]=false;
            }
        }
        return count;

};
