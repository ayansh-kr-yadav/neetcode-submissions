class Solution {
public:
    bool isSubsequence(string s, string t) {
        //  take two pointer i & j
        // initialize i for first string and j for second string 
        //  traverse the both string and if i & j match increment both  and j will be always increment
        // matche return true
            int i = 0, j = 0;
       while ( i < s.length() && j< t.length()){
        if(s[i]==t[j]){
            i++;
        }
        j++;
       }
       return i==s.length();
        
    }
};