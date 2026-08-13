class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l = 0;
        int r = 0;
        bool flag = true;
        string ans;
        while(l<word1.length() || r<word2.length()){
            if(flag){
                ans+=word1[l];
                l++;
                if(r<word2.length()) flag=!flag;
            }
            else{
                ans+=word2[r];
                r++;
                if(l<word1.length()) flag=!flag;
            }
        }
        return ans;
    }
};