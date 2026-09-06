class Solution {
public:

    int binarySearch(vector<int>& nums, int target, int st, int end) {

        if (st > end) {
            return -1;
        }

        int mid = st + (end - st) / 2;

        if (target > nums[mid]) {
            return binarySearch(nums, target, mid + 1, end);
        }
        else if (target < nums[mid]) {
            return binarySearch(nums, target, st, mid - 1);
        }
        else {
            return mid;
        }
    }

    int search(vector<int>& nums, int target) {

        return binarySearch(nums, target, 0, nums.size() - 1);
    }
};


        

