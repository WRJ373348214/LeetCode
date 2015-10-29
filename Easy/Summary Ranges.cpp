class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if(nums.empty())
            return res;
        int len=nums.size();
        int finish=nums[0],start=finish;
        for(int i=0;i<len;i++){
            if(nums[i]<=finish+1)
                finish=nums[i];
            else{
                string str;
                str+=to_string(start);
                if(start!=finish){
                    str+="->";
                    str+=to_string(finish);
                }
                res.push_back(str);
                start=finish=nums[i];
            }
            if(i==len-1){
                string str;
                str+=to_string(start);
                if(start!=finish){
                    str+="->";
                    str+=to_string(finish);
                }
                res.push_back(str);
            }
        }
        return res;
    }
    string to_string(int n){
        stringstream s;
        s<<n;
        string str;
        s>>str;
        return str;
    }
};
