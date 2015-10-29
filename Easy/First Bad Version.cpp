// Forward declaration of isBadVersion API.
bool isBadVersion(int version);
//TLE!!尽量减少调用isBadVersion，并不需要每次判断前一个，在这题中。
class Solution {
public:
    int firstBadVersion(int n) {
        int low=1,high=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(isBadVersion(mid))
                if(!isBadVersion(mid-1))
                    return mid;
                else
                    high=mid-1;
            else
                low=mid+1;
        }
        if(isBadVersion(low))
            return low;
        return -1;
    }
};
//AC
class Solution {
public:

    int firstBadVersion(int n) {
        if (n < 1) {
            return -1;
        }

        int start = 1;
        int end = n;
        int mid;
        while (start + 1 < end) {
            mid = start + (end - start) / 2;
            if (isBadVersion(mid)) {
                end = mid;
            } else {
                start = mid;
            }
        }

        if (isBadVersion(start)) {
            return start;
        } else if (isBadVersion(end)) {
            return end;
        }

        return -1;  // find no bad version
    }
};
