class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return  0;
        }
        int writer = 1;
        for (int reader = 1; reader< nums.size(); reader++){
            if(nums[reader] != nums[reader - 1]){
                nums[writer] = nums[reader];
                writer++;
            }
        }
        return writer ;
    }
};