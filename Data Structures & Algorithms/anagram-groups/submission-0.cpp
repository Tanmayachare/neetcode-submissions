class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<string, vector<string>> grp_anagram;
        for(int i=0; i<strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            grp_anagram[temp].push_back(strs[i]);
        }

        for(auto i: grp_anagram){
            result.push_back(i.second);
        }

        return result;
    }
};
