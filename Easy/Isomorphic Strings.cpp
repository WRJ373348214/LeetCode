class Solution {
public:
//92ms solution
//感觉会有漏洞  ···'1'+'12'····=···'11'+'2'···
//测试数据刚好就过了
    bool isIsomorphic(string s, string t) {
        int lenS=s.length();
        int lenT=t.length();
        if(lenS==0)
            return true;
        else
            return getKeyStr(s,lenS)==getKeyStr(t,lenT);
    }
    string getKeyStr(const string &s,int len){
        map<char,int> s_key;
        string str;
        int key=0;
        for(int i=0;i<len;i++){
            if(s_key.find(s[i])!=s_key.end())
                str+=char(48+s_key[s[i]]);
            else{
                s_key.insert(map<char,int>::value_type(s[i],key));
                str+=char(48+key);
                key++;
            }
        }
        return str;
    }
};
//8ms solution
    bool isIsomorphic(string s, string t) {
         int size=s.size();
         if (size==0)
            return true;
        char ch[128],ismap[128];
        for(int i=0;i<128;i++)
        {
            ch[i]=-1;
            ismap[i]=-1;
        }
        bool flag=true;
        for(int i=0;i<size;i++)
        {
            if(ch[s[i]]==-1&&ismap[t[i]]==-1)
            {
                ch[s[i]]=t[i];
                ismap[t[i]]=s[i];

            }else if(ch[s[i]]!=t[i]||ismap[t[i]]!=s[i])
            {
                flag=false;
                break;
            }
        }
        return flag;
    }
