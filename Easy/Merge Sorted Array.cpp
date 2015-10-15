class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index=0;
        for(int i=0;i<n;i++){
            index=binarySearch(nums1,index,m,nums2[i]);
            nums1.insert(nums1.begin()+index,nums2[i]);
        }
    }
    int  binarySearch(vector<int> num,int fir,int last,int value){

        while(fir<last){
            int mid=(fir+last)/2;
            if(value>num[mid])
                fir=mid+1;
            else if(value<num[mid])
                last=mid-1;
            else
                return mid;
        }
        return fir;
    }
};
