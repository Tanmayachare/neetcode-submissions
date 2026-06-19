class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> mpp;
        int cnt = 0;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(auto i: mpp){
            if(i.second>1){
                cnt++;
                return true;
            }
        }
        if(cnt == 0){
            return false;
        }
    }
};