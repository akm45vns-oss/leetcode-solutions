class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        vector<int>used(nums2.size(),0);
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j] && used[j]==0)
                {
                    used[j]=1;
                    ans.push_back(nums1[i]);
                    break;
                }
            }
        }
    return ans;
    }
};