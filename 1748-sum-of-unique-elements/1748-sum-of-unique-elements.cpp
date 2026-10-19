class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int c=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    c++;
                }
            }
            if(c==1){
                 sum+=nums[i];
            }
        }
    return sum;
    }

};