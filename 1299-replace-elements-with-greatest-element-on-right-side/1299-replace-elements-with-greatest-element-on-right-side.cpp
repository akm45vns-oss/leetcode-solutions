class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> a(arr.size());
        int max;
        for(int i=0;i<arr.size();i++){
            max=-1;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]>max){
                    max=arr[j];
                }
            }
            a[i]=max;
        }
    return a;
    }
};