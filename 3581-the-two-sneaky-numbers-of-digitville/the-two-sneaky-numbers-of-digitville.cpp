class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        vector<int> freq(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
            if (freq[nums[i]] == 2) {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};
