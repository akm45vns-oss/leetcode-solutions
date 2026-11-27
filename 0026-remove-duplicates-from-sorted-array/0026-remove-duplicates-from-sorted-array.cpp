using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int c=1;
      for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[i-1]){
            nums[c]=nums[i];
            c++;
        }
      }  
      return c;
    }
};