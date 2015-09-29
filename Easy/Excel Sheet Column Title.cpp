class Solution {
public:
    string convertToTitle(int n) {
        string s;
        while(n>0){
            int t=(n-1)%26;
            char c='A'+t;
            s=c+s;
            n=(n-1)/26;
        }
        return s;
    }
};
