class Solution {
public:
    bool isSubsequence(string s, string t) {
        // traverse the substring and store this into the hashmap
        // in hashmap the value of key will be the index of string /key
         // travere the string and now compare the index value 
         // if index value of that is key is less than the current index
         // return false
         if( t.length()==0){
            return false;
         }
            unordered_map<char, int> hash;

         for( int i= 0 ; i< t.length() ; i++){
            hash[t[i]]=i;
         }

         for(int i= 1 ; i< s.length() ; i++){
            if(hash[s[i]]< i || hash[s[i-1]] > hash[s[i]]){
                return false;
            }
         }
         
         return true;
    }
};