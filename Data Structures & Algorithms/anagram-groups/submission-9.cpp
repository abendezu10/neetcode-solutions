class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> anagrams_map;
        vector<vector<string>> ret;
        int index = 0;

        for(int i = 0; i < strs.size(); i++){
            string sorted = strs.at(i);
            sort(sorted.begin(), sorted.end());
            auto it = anagrams_map.find(sorted);

            if(it == anagrams_map.end()){
                anagrams_map.insert({sorted, index});
                index++;
                ret.push_back({strs.at(i)});
            } else{
                
                ret.at(it->second).push_back(strs.at(i));
            }

        }
        return ret;
    }
};
