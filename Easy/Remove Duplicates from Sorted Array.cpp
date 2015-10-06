class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(!nums.size())
            return 0;
        vector<int>::iterator it=nums.begin();
        vector<int>::iterator next=it+1;
        while(next!=nums.end()){
            if(*it!=*next){
                it++;
                next++;
            }
            else
                next=nums.erase(next);
        }
        return nums.size();
    }
};
