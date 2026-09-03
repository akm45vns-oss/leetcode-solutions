class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>a=heights;
        sort(heights.begin(),heights.end());
        int c=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=a[i]){
                c++;
            }
        }
return c;
        
    }
};