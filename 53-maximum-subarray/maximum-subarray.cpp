class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int csum  = 0,maxSum = INT_MIN;
        for(int i = 0;i<nums.size();i++){
            csum += nums[i];
            maxSum = max(csum,maxSum);
            if(csum < 0) csum = 0;
        }
        return maxSum;
    }
};