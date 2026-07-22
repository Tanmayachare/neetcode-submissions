class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> ref;
        for(int i: nums){
            ref[i]++;
        }
        for(auto j: ref){
            if(j.second>1) return true;
        }
        return false;
    }
};