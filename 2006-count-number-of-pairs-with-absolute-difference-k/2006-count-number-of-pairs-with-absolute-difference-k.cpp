class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int c=0;
        for(int i =0 ;i<nums.size();i++){
            for(int j =0 ;j<nums.size();j++){
                if((nums[i]-nums[j]==k) && i!=j){
                    c++;
                }
            }
        }
    return c;
    }
};