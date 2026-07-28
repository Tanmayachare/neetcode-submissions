class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l1 = 0;
        int l2 = 0;
        while(l1 < s.size()){
            if(s[l1]!=t[l2]){
                if(l2 == t.length()-1) return false;
                bool flag = 0;
                while(l2 < t.size()){
                    if(s[l1] == t[l2]){
                        l1++;
                        l2++;
                        flag = 1;
                        break;
                    }
                    l2++;
                }
                if(flag == 0) return false;
            }
            else{
                l1++;
                l2++;
            }
        }
        return true;
    }
};