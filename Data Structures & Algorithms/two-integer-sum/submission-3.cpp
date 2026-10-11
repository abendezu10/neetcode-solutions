class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen; // num, index

        for(int i = 0; i < nums.size(); i++){
            if(seen.find(target - nums.at(i)) == seen.end()){
                seen.insert({nums.at(i), i});
            }else{
                vector<int> ret;
                ret.push_back(seen[target - nums.at(i)]);
                ret.push_back(i);
                return ret;
            }

        }
       
        return {};
    }
};
