class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> t;
        vector<int>::iterator it=nums.begin();
        while(it!=nums.end()){
            set<int>::iterator p=t.find(*it);
            if(p!=t.end())
                return true;
            else
                t.insert(*it);
            it++;
        }
        return false;
    }
};
