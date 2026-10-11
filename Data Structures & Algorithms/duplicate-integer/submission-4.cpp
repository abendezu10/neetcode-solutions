class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> nums_set;
        for(int n : nums){
            nums_set.insert(n);
        }
        return nums_set.size() != nums.size();
        
    }
};