class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size=strs.size();
        if(!size)
            return "";
        int minLen=strs[0].size();
        for(int i=1;i<size;i++){
            if(strs[i].size()<minLen)
                minLen=strs[i].size();
        }
        string commonStr;
        for(int j=0;j<minLen;j++){
            char c=strs[0][j];
            bool flag=true;
            for(int i=1;i<size;i++){
                if(strs[i][j]!=c){
                    flag=false;
                    break;
                }
            }
            if(flag)
              commonStr+=c;
            else
                break;
        }
        return commonStr;
    }
};
