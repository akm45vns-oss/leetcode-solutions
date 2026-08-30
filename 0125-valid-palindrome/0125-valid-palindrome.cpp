class Solution {
public:
    bool isPalindrome(string s) {
       string a="";
       for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                a += tolower(s[i]);
            }
        } 
       int start=0,end=a.size()-1;
       while(start<end){
        if(a[start]!=a[end]){
            return false;
        }
        start++;
        end--;
       }
return true;
    }
};