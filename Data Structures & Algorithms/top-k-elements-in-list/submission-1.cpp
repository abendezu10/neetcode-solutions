class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq; // num and its freq

        for(int c : nums){
            freq[c]++;
        }

        //pair<int,int>

        vector<pair<int,int>> v;

        for(const auto& pairs : freq){
            v.push_back({pairs.second, pairs.first});
        }

        sort(v.begin(), v.end());

        vector<int> ret;

        for(int i = 0; i < k ; i++){
            ret.push_back(v.at(v.size() - 1 - i).second);
        }




        return ret;
    }
};
