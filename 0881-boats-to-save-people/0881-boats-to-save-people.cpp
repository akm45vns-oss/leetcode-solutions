class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int start=0,end=people.size()-1,c=0;
        sort(people.begin(), people.end());
        while(start<=end){
            if(people[end]==limit){
                end--;
                c++;
            }else if(people[end]<limit && (people[end]+people[start])<=limit){
                c++;
                start++;
                end--;
            }else{
                c++;
                end--;
            }

        }
        return c;
    }
};