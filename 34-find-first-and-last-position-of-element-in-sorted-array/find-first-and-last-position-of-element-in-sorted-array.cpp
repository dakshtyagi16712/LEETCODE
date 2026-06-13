class Solution {
public:
    int ub(vector<int>& nums, int target){
            int low=0;
            int high=nums.size()-1;
            int ans=nums.size();
            while(low<=high){
                int mid=low+(high-low)/2;
                if(nums[mid]>target){
                    high=mid-1;
                    ans=mid;
                }else{
                    low=mid+1;
                }
            }return ans;
        }
        int lb(vector<int>& nums, int target){
            int low=0;
            int high=nums.size()-1;
            int ans=nums.size();
            while(low<=high){
                int mid=low+(high-low)/2;
                if(nums[mid]>=target){
                    high=mid-1;
                    ans=mid;
                }else{
                    low=mid+1;
                }
            }return ans;
        }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int l = lb(nums, target);
        if(l==nums.size() || nums[l] !=target)return{-1,-1};
        int u = ub(nums, target);
        return {l, u - 1};
    }
};