class Solution {
public:
    int maxArea(vector<int>& heights) {
        vector <int> v;
        int n=heights.size();
        int l=0;
        int r=n-1;
        int maximum=0;
        while(l<r){
            int height=min(heights[l],heights[r]);
            int width=r-l;
            int temp=height*width;
            maximum=max(temp,maximum);
            if(heights[l]<=heights[r]){
                l++;
            }else{
                r--;
            }  
        }
        return maximum;
    }
};
