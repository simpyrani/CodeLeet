class Solution {
public:
    int trap(vector<int>& height) {
        
    int len=height.size();
        int min=0,prev=0,i=0,j=len-1,ans=0;
        while(i<=j){
            min=height[i]<=height[j]?i++:j--;
            if(prev>height[min]){
                ans+=prev-height[min];
            }
            else
                prev=height[min];
        }
        return ans;


    }
    
};