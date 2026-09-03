class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
    int start=1,index=0,i=0;
    vector<int>a(k);
    while(index<k){
       if (i < arr.size() && arr[i] == start) {
                start++;
                i++;
        }else{
            a[index]=start;
            index++;
            start++;
        }

    }
    return a[k-1];
    }
};