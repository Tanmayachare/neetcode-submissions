class Solution {
public:
    int strStr(string haystack, string needle) {
        int pnt1 = 0;
        while(pnt1 + needle.size() <= haystack.size()){
            if(haystack.substr(pnt1,needle.size()) == needle){
                return pnt1;
            }
            pnt1++;
        }
        return -1;
    }
};