class Solution {
public:
    int findNumbers(vector<int>& nums){
        int count =0;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int b=0;
            while(a!=0){
                a/=10;
                b++;
            }
            if(b%2==0){
                count++;
            }
        }        
    
    return count;
    }
};