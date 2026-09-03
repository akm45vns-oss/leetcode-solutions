class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a(nums1.size()+nums2.size());
        int index=0;
        for(int i=0;i<nums1.size();i++){
            a[index]=nums1[i];
            index++;
        }
        for(int i=0;i<nums2.size();i++){
            a[index]=nums2[i];
            index++;
        }
        sort(a.begin(),a.end());
        double median;
        if(a.size()%2!=0){
            median=a[(a.size()/2)];
        }else{
            median=(a[(a.size()/2)-1]+a[(a.size()/2)])/2.0;
        }
    return median;
    }
};