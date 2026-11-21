class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>a;
        for(int i=0;i<nums.size();i++){
            a.push_back(nums[nums[i]]);
        }
        return a;
    }
};