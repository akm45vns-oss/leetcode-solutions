class Solution {
public:
    int findMiddleIndex(vector<int>& a) {
        for(int i=0;i<a.size();i++){
            int lsum=0,rsum=0;
            for(int j=0;j<i;j++){
                lsum+=a[j];
            }
            for(int k=i+1;k<a.size();k++){
                rsum+=a[k];
            }
            if(lsum==rsum){
                return i;
            }
        }
    return -1;
    }
};