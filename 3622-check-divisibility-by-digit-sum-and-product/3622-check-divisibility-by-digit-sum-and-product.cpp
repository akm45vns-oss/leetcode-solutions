class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,pro=1,m=n;
        while(n!=0){
            int a = n%10;
            sum+=a;
            pro*=a;
            n/=10;
        }
        int total=sum+pro;
        if(m%total==0){
            return true;
        }else{
            return false;
        }
        
    }
};