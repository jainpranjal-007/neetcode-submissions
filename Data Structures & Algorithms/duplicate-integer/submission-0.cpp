class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>f;
        int n=nums.size();
        for(int i=0; i<n; i++){
            f.insert(nums[i]);
        }
        if(f.size()==n)return false;
        return true;
    }
};