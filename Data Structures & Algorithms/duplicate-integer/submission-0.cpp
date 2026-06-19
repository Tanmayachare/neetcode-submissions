class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int flag= 0;
        for(int i=0; i<nums.size(); i++){
            int cnt = 0;
            for(int j=0; j<nums.size(); j++){
                if(nums[i] == nums[j]){
                    cnt++;
                }
            }
            if(cnt > 1){
                flag++;
            }
        }
        if(flag >= 1){
            return true;
        }
        else{
            return false;
        }
    }
};