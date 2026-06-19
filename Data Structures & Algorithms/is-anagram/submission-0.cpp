class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> str1;
        map<char, int> str2;
        if(s.size()==t.size()){
            for(int i=0; i<s.size(); i++){
                str1[s[i]]++;
                str2[t[i]]++;
            }
        }
        else{
            return false;
        }

        if(str1 == str2){
            return true;
        }
        else return false;
    }
};
