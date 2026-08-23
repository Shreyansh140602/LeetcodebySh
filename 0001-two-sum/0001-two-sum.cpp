class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // Check if we have already seen the complement
            if (seen.find(complement) != seen.end()) {
                return {seen[complement], i};
            }
            
            // Add the current number and its index to the map
            seen[nums[i]] = i;
        }
        
        return {};
    }
};