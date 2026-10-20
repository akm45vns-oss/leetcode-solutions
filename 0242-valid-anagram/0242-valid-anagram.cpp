class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>a;
        unordered_map<char,int>b;
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            a[s[i]]++;
            b[t[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(a[s[i]]!=b[s[i]]){
                return false;
            }
        }
    return true;
    }
};