class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len=nums.size();
        sort(nums.begin(),nums.end());
        return nums[len/2];
    }
};
//Solution2:�ҵ�������һ����Ԫ�ؾ����������һ����ʣ�³�������Ԫ��
