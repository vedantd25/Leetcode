class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        set<int> set;
        int l=0;
        int currentCounter=0;
        for(int i=0;i<n;i++){
            while(set.find(s[i]) != set.end()){
                set.erase(s[l]);
                l++;
            }
            set.insert(s[i]);

            currentCounter=max(currentCounter,(i-l)+1);
        } 

        return currentCounter;  
    }
};
