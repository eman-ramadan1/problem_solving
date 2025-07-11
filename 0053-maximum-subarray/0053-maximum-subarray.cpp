class Solution {
public:
    int maxSubArray(vector<int>& nums) { // find the subarray with the largest sum
        int maxSum = nums[0];  
        int curr = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            
            curr = max(nums[i], curr + nums[i]);
            maxSum = max(maxSum, curr);
        }

        return maxSum;
    }
};
