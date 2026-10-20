class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>a;
        for(int i =0;i<magazine.size();i++){
             a[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.size();i++){
            if(a[ransomNote[i]]==0){
                return false;
            }
            a[ransomNote[i]]--;
        }
    return true;
    }
};