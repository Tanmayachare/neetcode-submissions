class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int, int> ref;
        for(int i=0; i<numbers.size(); i++){
            if(ref.find(target-numbers[i]) != ref.end()){
                return {ref[target-numbers[i]]+1, i+1};
            }
            ref[numbers[i]] = i;
        }
        return {};
    }
};
