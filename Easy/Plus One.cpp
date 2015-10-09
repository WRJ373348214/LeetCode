class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>::iterator first=digits.begin();
        vector<int>::iterator it=digits.end();
        int flag=0;
        if(first==it)
            return digits;
        it--;
        *it=*it+1;
        while(1){
            if(flag)
                *it+=1;
            flag=0;
            if(*it>=10){
                *it%=10;
                flag=1;
            }
            if(it!=first)
                it--;
            else
                break;
        }
        if(flag)
            digits.insert(first,1);
        return digits;
    }
};
