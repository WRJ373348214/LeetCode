class Solution {
public:
    //O(n),������Ѷ���easy����ܸߣ�O(n)�Ϳռ�Ҫ��ΪO(1)
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
//TLE,O((k%n)*n)  => �Ľ�����Ҫ���ƶ���һ����λ�õ������Ǹ��ⷨ
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
