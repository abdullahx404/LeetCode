class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seens;
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            if (seens.find(complement) != seens.end()) {
                return {seens[complement], i};
            }
            
            seens[nums[i]] = i;
        }
        
        return {};
    }
};
