class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       // initialize the gretest element -1
       // traverse the array from last to end
       // track the current element  assign with greatestElement
       // update greatestElement with max(current , greatestElement)
        int greatestElement=-1;
        
       for(int i=arr.size()-1; i>=0 ; i--){
           int  current= arr[i];
            arr[i]=greatestElement;
           greatestElement=max(current, greatestElement);
       }
       return arr;

    }
};