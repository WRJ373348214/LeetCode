class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.size();
        if(!len)
            return 0;
        int LenOfLastWord=0;
        for(int i=0;i<len;i++){
            if(s[i]==' '){
                if(s[i+1]&&s[i+1]!=' ')
                    LenOfLastWord=0;
            }
            else
                LenOfLastWord++;
        }
        return LenOfLastWord;
    }
    //既然求最后的单词，就从最后开始算
    //思维的束缚
    int lengthOfLastWord(string s) {
        int index=s.size()-1;
        if(index<0)
            return 0;
        int lenOfLastWord=0;
        while(index>=0&&s[index]==' ')
            index--;
        while(index>=0){
            if(('a'<=s[index]&&s[index]<='z')||('A'<=s[index]&&s[index]<='Z'))
                lenOfLastWord++;
            else
                break;
            index--;
        }

        return lenOfLastWord;
    }
};
