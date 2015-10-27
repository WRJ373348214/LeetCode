class Solution {
public:
    string countAndSay(int n) {
        string say="1";
        for(int i=2;i<=n;i++)
            say=getToSay(say);
        return say;
    }
    string getToSay(string s){
        string say;
        int count=0;
        char c=s[0];
        for(int i=0;i<s.size();i++){
            if(s[i]==c)
                count++;
            else{
                say+=char(count+48);
                say+=c;
                count=1;
                c=s[i];
            }
        }
        say+=char(count+48);
        say+=c;
        return say;
    }
};
