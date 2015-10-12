class Solution {
public:
    int rob(vector<int>& nums) {
        int len=nums.size();
        if(!len)
            return 0;
        int dp[len];
        if(len==1)
            return nums[0];
        if(len==2)
            return max(nums[0],nums[1]);
        dp[0]=nums[0];
        dp[1]=nums[1];
        dp[2]=nums[0]+nums[2];
        for(int i=3;i<len;i++)
            dp[i]=max(dp[i-2],dp[i-3])+nums[i];
        return max(dp[len],dp[len-1]);
    }
};
