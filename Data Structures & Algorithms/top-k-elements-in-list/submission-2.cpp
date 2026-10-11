class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for(int n : nums){
            freq[n]++; // key number : freq
        }

        vector<pair<int,int>> pairs;
        
        for(const auto& p : freq){
            
            pairs.push_back({p.second, p.first});
        }

        sort(pairs.begin(), pairs.end());

        vector<int> ret;
        for(int i = 0; i < k; i++){
            ret.push_back(pairs[pairs.size() - i - 1].second);
        }
        return ret;
    }
};
