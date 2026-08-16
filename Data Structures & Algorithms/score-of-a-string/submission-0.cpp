class Solution {
public:
    int scoreOfString(string s) {
        //traverse the string 
        //store the character and convert it int ascii value
        // if their subtraction is in negative conert it into positive

        // then add the their difference
        int score=0;

        for(int i=1 ; i< s.length() ; i++){
            int temp = (s[i]-'a')-(s[i-1]-'a');
            if(temp <0){
                temp=-1 * temp ;
            }
            score+=temp;
        }
        return score;

    }
};