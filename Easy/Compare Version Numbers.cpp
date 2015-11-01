class Solution {
public:
    int compareVersion(string version1, string version2) {
        int len1=version1.size();
        int len2=version2.size();
        int index1=0,index2=0;
        int num1=0,num2=0;
        while(index1<len1||index2<len2){
            num1=num2=0;
            while(index1<len1&&version1[index1]!='.'){
                num1*=10;
                num1+=version1[index1]-'0';
                index1++;
            }
            while(index2<len2&&version2[index2]!='.'){
                num2*=10;
                num2+=version2[index2]-'0';
                index2++;
            }
            if(num1>num2)
                return 1;
            if(num1<num2)
                return -1;
            index1++;
            index2++;
        }
        return 0;
    }
};
