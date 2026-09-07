class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0; i<n; i++){
            nums1[m+i] = nums2[i];
        }

        for(int i=m+n-1; i>0; i--){
            for(int j=i-1; j>=0; j--){
                if(nums1[j]>nums1[i]){
                    swap(nums1[j], nums1[i]);
                }
            }

        }
        
    }
};