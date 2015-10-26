class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int lenA=a.size();
        int lenB=b.size();
        string shorterStr=(lenA < lenB)?a : b;
        string longerStr=(lenA >= lenB)?a : b;
        while(shorterStr.size() != longerStr.size())
            shorterStr='0'+shorterStr;
        bool CF=false;
        for(int i=longerStr.size()-1;i>=0;i--){
            int res=(shorterStr[i]-'0')+(longerStr[i]-'0')+CF;
            if(res<2){
                result=char(res+'0')+result;
                CF=false;
            }
            else{
                result=char(res%2+'0')+result;
                CF=true;
            }
        }
        if(CF)
            result='1'+result;
        return result;
    }
};
