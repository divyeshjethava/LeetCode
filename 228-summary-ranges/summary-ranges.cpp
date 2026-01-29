class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> arr;

        int n = nums.size();
        if (n == 0) return arr;

        int start = nums[0];

        for (int i = 1; i <= n; i++) {
          
            if (i == n || nums[i] != nums[i - 1] + 1) {
                if (start == nums[i - 1]) {
                    arr.push_back(to_string(start));
                } else {
                    arr.push_back(to_string(start) + "->" + to_string(nums[i-1]));
                }

                if (i < n) start = nums[i];
            }
        }
        return arr;
    }
};