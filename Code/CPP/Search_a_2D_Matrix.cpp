## Problem Statement https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row=-1;
        for(int i=0;i<matrix.size();i++){
            int c=matrix[i].size();
            if(matrix[i][c-1]>=target){
                
                row=i;
                break;
            }
        }
        
        if(row==-1)
            return false;
        
        else{
            
            for(int i=0;i<matrix[row].size();i++){
                if(matrix[row][i]==target)
                    return true;
            }
        }
        
        return false;
    }
};
