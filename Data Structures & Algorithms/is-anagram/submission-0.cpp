class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char , int> s1;
        unordered_map<char , int > t1;

        for(char x:s){
            s1[x]++ ;
        }
        for (char x: t ){
            t1[x]++;
        }
        if(s1==t1){
            return true;
        }
        return false;
    }
};
