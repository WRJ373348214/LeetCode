class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len=nums.size();
        sort(nums.begin(),nums.end());
        return nums[len/2];
    }
};
//Solution2:找到两个不一样的元素就消掉，最后一定会剩下出现最多的元素
