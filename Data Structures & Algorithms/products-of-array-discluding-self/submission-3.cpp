class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> suff(n);
        vector<int> pref(n);
        vector<int>  res(n);

        int left = 1;
        for(int i = 0; i < n; i++){
            pref[i] = left;
            left *= nums[i];
        }

        int right = 1;
        for(int i = n - 1; i >= 0; i--){
            suff[i] = right;
            right *= nums[i];
        }

        for(int i = 0; i < n ; i++){
            res[i] = pref[i] * suff[i];
        }

        return res;
    }
};
