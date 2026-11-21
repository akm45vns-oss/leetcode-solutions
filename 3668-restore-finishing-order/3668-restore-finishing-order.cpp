class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map<int,int>a;
        vector<int>b;
        for(int i=0;i<friends.size();i++){
            a[friends[i]]++;
        }
        for(int i=0;i<order.size();i++){
            if(a[order[i]]!=0){
                b.push_back(order[i]);
            }
        }
return b;
    }
};