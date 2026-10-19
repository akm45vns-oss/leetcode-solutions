class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int>a;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int c=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    c++;
                }
            }
            if(c==1){
                a.push_back(nums[i]);
            }
        }
        for(int i=0;i<a.size();i++){
            sum+=a[i];
        }
    return sum;
    }

};