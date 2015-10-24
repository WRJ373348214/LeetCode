class Solution {
public:
    bool wordPattern(string pattern, string str) {
        map<char,int> pattern_key;
        map<string,int> str_key;

        string keyStrOfPat;
        string keyStrOfStr;
        int key=0;
        string s;
        for(int i=0;i<=str.size();i++){

            if(i==str.size()||str[i]==' '){
                if(str_key.find(s)==str_key.end()){
                    keyStrOfStr+=char(key+48);
                    str_key.insert(map<string,int>::value_type(s,key));
                    key++;
                }
                else
                    keyStrOfStr+=char(str_key[s]+48);
                s="";
            }
            else
                s+=str[i];
        }
        key=0;
        for(int i=0;i<pattern.size();i++){
            if(pattern_key.find(pattern[i])==pattern_key.end()){
                keyStrOfPat+=char(key+48);
                pattern_key.insert(map<char,int>::value_type(pattern[i],key));
                key++;
            }
            else
                keyStrOfPat+=char(pattern_key[pattern[i]]+48);
        }
        return keyStrOfPat==keyStrOfStr;
    }
};
