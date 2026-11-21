class Solution {
public:
    int differenceOfSums(int n, int m) {
        int d=0,nd=0;
        for(int i=1;i<=n;i++){
            if(i%m==0){
                d+=i;
            }else{
                nd+=i;
            }
        }
        return nd-d;
    }
};