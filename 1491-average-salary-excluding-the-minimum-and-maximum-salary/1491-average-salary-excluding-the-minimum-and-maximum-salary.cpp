class Solution {
public:
    double average(vector<int>& salary) {
     sort(salary.begin(),salary.end());
     double a=0;
     for(int i=1;i<salary.size()-1;i++)
     {
      a+=salary[i];
     }
    return a/(salary.size()-2);
    }
};