class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> merge(m+n);
        int c=0;
        for(int i=0;i<m;i++){
            merge[c]=nums1[i];
            c++;
        }
         for(int j=0;j<n;j++){
            merge[c]=nums2[j];
            c++;
                
            }
        sort(merge.begin(), merge.end());
        for (int i = 0; i < m + n; i++) {
            nums1[i] = merge[i];
        }
    }

};