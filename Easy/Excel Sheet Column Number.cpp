class Solution {
public:
    int titleToNumber(string s) {
        int size=s.size();
        int num=0;
        for(int i=0;i<size;i++){
            int t=s[i]-'A'+1;
            num+=t*pow(26,size-i-1);
        }
        return num;
    }
};
