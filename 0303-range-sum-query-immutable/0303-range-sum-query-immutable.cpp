class NumArray {
public: 
    vector<int>a;
    NumArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            a.push_back(nums[i]);
        }
    }
    int sumRange(int left, int right) {
     int sum=0;
     for(int i=left;i<=right;i++){
     sum+=a[i];
     }
     return sum;
    }
};
