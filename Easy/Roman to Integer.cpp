class Solution {
public:
    int getValue(char c){
         switch(c){
            case'I':return 1;
            case'V':return 5;
            case'X':return 10;
            case'L':return 50;
            case'C':return 100;
            case'D':return 500;
            case'M':return 1000;
            default:return 0;
         }
    }
    int romanToInt(string s) {
        int len=s.size();
        if(!len)
            return 0;
        int num=0;
        int t=getValue(s[0]),next;
        for(int i=1;i<=len;i++){
            if(i!=len)
                next=getValue(s[i]);
            else
                next=0;

            if(t>=next)
                num+=t;
            else
                num-=t;
            t=next;
        }
        num+=next;
        return num;
    }
};
