class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> n_set;

        for(int n : nums){
            if(n_set.find(n) != n_set.end()){
                return true;
            }

            n_set.insert(n);
        }
        return false;
    }
};