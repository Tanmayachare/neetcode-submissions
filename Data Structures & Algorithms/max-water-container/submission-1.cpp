class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size()-1;
        int maxArea = 0;
        while(l<r){
            if(heights[l]<heights[r]){
                int area = heights[l] * (r-l);
                maxArea = max(area, maxArea);
                l++;
            }
            else{
                int area = heights[r] * (r-l);
                maxArea = max(area, maxArea);
                r--;
            }
        }
        return maxArea;
    }
};
