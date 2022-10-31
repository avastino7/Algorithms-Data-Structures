/*

Given an m x n matrix, return all elements of the matrix in spiral order.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

*/


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> elementsInSpiralOrder;

        int leftBoundary = 0;
        int rightBoundary = matrix[0].size()-1;
        int topBoundary = 0;
        int bottomBoundary = matrix.size()-1;
        

        while (leftBoundary <= rightBoundary && topBoundary <= bottomBoundary){
            for (int j = leftBoundary; j <= rightBoundary; j++){
                elementsInSpiralOrder.push_back(matrix[topBoundary][j]);
            }
            topBoundary++;
            
            for (int i = topBoundary; i <= bottomBoundary; i++){
                elementsInSpiralOrder.push_back(matrix[i][rightBoundary]);
            }
            rightBoundary--;
            
            if (leftBoundary > rightBoundary || topBoundary > bottomBoundary){
                break;
            }
            
            for (int j = rightBoundary; j >= leftBoundary; j--){
                elementsInSpiralOrder.push_back(matrix[bottomBoundary][j]);
            }
            bottomBoundary--;
            
            for (int i = bottomBoundary; i >= topBoundary; i--){
                elementsInSpiralOrder.push_back(matrix[i][leftBoundary]);
            }
            leftBoundary++;
        }
        
        return elementsInSpiralOrder;
    }
};
