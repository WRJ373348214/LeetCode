class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty())
            return true;
        int len=s.size();
        string str;
        for(int i=0;i<len;i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')){
                str+=s[i];
            }
            if(s[i]>='A'&&s[i]<='Z'){
                s[i]=char(s[i]-'A'+'a');
                    str+=s[i];
            }
        }
        len=str.size();
        for(int i=0;i<len/2+1;i++){
            if(str[i]!=str[len-i-1])
                return false;
        }
        return true;
    }
};
