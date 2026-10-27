class Solution {
    public boolean isPalindrome(int x) {
    int a=x;
    int r=0;
        while(a>0){
            int rem=a%10;
            r=r*10+rem;
            a/=10;
        }
   return x==r;
    }

}



