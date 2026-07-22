class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        if(s == t) return true;
        map<char, int> s1;
        map<char, int> s2;
        for(char i: s){
            s1[i]++;
        }
        for(char j:t){
            s2[j]++;
        }
        if(s1 == s2) return true;
        return false;
    }
};
