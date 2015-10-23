class Solution {
public:
    bool isValid(string s) {
        int len=s.size();
        if(len%2)
            return false;
        stack<char> sta;
        sta.push(s[0]);
        for(int i=1;i<len;i++){
            if(sta.size()&&getPartner(sta.top())==s[i])
                sta.pop();
            else
                sta.push(s[i]);
        }
        if(sta.size())
            return false;
        else
            return true;
    }
    char getPartner(char c){
        switch(c){
            case '{': return '}';
            case '(': return ')';
            case '[': return ']';
        }
    }
};
