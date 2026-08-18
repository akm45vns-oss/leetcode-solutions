class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int l=candies[0];
        for(int i=0;i<candies.size();i++){
            if(candies[i]>l){
                l=candies[i];
            }
        }
         vector<bool> a(candies.size());
            for(int i=0;i<candies.size();i++){
                if(candies[i]+extraCandies>=l){
                    a[i]=true;
                }else{
                    a[i]=false;
                }
            }   
    return a;
    }
};