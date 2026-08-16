class Solution {
public:
    int lengthOfLastWord(string s) {
        // traverse the string from back  
        // if any space found in the string trverse will break / exit from loop 
        // and return store count;
        int count=0 ;
        int end= s.length()-1;
        while(end>=0){
            if(s[end]==' '){
             end--;
            } else {
            count++;
            end--;
            }

            if(s[end]==' ' && count > 0){
                return count;
            }
        }
        return count;


    }
};