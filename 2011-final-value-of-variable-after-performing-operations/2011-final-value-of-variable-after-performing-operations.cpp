class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int a=0;
        for(int i =0;i<operations.size();i++){
            if(operations[i][1]=='+'){
                a++;
            }else{
                a--;
            }
        }
    return a;
    }
};