class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
      int len=nums.size();
      //map<value,index>
      map<int,int> hash_table;
      for(int i=0;i<len;i++){
        if(hash_table.find(nums[i])!=hash_table.end()&&i-hash_table[nums[i]]<=k)
            return true;
        else
            hash_table[nums[i]]=i;
      }
      return  false;
    }
};
