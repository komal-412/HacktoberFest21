## problem link :-    https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n=nums.size();
        int i=0,j=0;
        if(n>1){
           
            
            while(i<n){
                
                if(nums[i]==0)
                  i++;
                
                else{
                    
                    swap(nums[i],nums[j]);
                        i++;
                    j++;
                }
            }
            
        }
    }
};
