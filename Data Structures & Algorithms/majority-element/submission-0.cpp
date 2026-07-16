class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int min = nums.size()/2;
        int max=0;
        map<int, int> cnt;
        for(int i=0; i<nums.size(); i++){
            cnt[nums[i]]++;
        }
        for(auto c: cnt){
            if(c.second>max && c.second >min){
                max = c.first;
            }
        }

        return max;
    }
};