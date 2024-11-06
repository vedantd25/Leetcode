class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {

        vector <string> result;
        int counter=1;
        int i=0;

        while(i<target.size()){
            if(counter==target[i]){
                result.push_back("Push");
                i++;
            }else{
                result.push_back("Push");
                result.push_back("Pop");
            }
            counter++;
            
        }

        return result;
    
    }
};