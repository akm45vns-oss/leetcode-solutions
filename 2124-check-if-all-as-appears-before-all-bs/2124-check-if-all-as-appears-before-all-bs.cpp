class Solution {
public:
    bool checkString(string s) {
        bool a=false,b=false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b'){
                b=true;
            }
            if(b){
                if(s[i]=='a'){
                    return false; 
                }
            }
        }
        return true;
    }
};