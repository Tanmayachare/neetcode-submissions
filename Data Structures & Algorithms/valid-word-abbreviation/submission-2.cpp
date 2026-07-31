class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int l=0;
        int r=0;
        while(l<word.length() && r<abbr.length()){
            if(isdigit(abbr[r])){
                int nums = 0;
                if(abbr[r]=='0') return false;
                while(r<abbr.length() && isdigit(abbr[r])){
                    nums = nums*10 + (abbr[r] - '0');
                    r++;
                }
                l+=nums;
            }
            else{
                if(word[l]==abbr[r]) {
                    l++;
                    r++;
                }
                else return false;
            }
        }
        return l==word.length() && r==abbr.length();
    }
};