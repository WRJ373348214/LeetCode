class Solution {
public:
    int strStr(string haystack, string needle) {
        if(!needle.size())
            return 0;
        if(!haystack.size())
            return -1;
        return KMPMatch(haystack,needle);
    }

    void  getNext(string s,int *next){
        int i=0,j=-1;
        next[0]=-1;
        while(i<s.size()-1){
            if(j==-1||s[i]==s[j]){
                ++i;
                ++j;
                next[i]=j;
            }
            else
                j=next[j];
        }
    }
    int KMPMatch(string s,string t){
        int i=0,j=0;
        int next[1000000];
        getNext(t,next);
        while(i<s.size()){
            if(j==-1||s[i]==t[j]){
                i++;
                j++;
            }
            else
                j=next[j];
            if(j==t.length())
                return i-j;
        }
        return -1;
    }
};
