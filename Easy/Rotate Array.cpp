class Solution {
public:
    //O(n),这道题难度在easy里面很高，O(n)和空间要求为O(1)
    void rotate(vector<int>& nums, int k) {
        if (nums.empty() || k == 0) return;
        int len = nums.size(), moved = 0, i = 0, t = nums[0], starti = 0;
        while (++moved <= len) {
            i = (i+k) % len;
            swap(t,nums[i]);
            if (i == starti) {
                i = ++starti;
                t = nums[i];
            }
        }
    }
};
//TLE,O((k%n)*n)  => 改进不必要的移动，一步到位得到上面那个解法
void rotate(vector<int>& nums, int k) {
        int len=nums.size();
        k=k%len;
        while(k--){
            int value=nums[len-1];
            for(int i=len-1;i>0;i--)
                nums[i]=nums[i-1];
            nums[0]=value;
        }
}
