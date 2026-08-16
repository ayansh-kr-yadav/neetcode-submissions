class Solution {
public:
    int appendCharacters(string s, string t) {
        // we will use two pinter i & j 
        // i denote string i  and j denote string t
        // traverse the string s and string t
        //i will increment until reached end and j will increment when element will matched 
        // return  lenth of string t - j

        int i=0 ,j=0;
        int m= s.length();
        int n=t.length();
        while(i< m && j< n){
            if(s[i]==t[j]){
                j++;
            }
            i++;
        } 
        return n-j;
    }
};