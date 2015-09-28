class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         vector<int>::iterator it=nums.begin();
        int size=nums.size();
        for(int i=0;i<size;i++){
            if(*it==0){
                nums.erase(it);
                nums.push_back(0);
            }
            else
                it++;
        }
    }
};
