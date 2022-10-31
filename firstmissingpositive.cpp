/*
Given an unsorted integer array nums, return the smallest missing positive integer.

You must implement an algorithm that runs in O(n) time and uses constant extra space.
*/
class Solution
{
public:
    int firstMissingPositive(int A[], int n)
    {
        for(int i = 0; i < n; ++ i)
            while(A[i] > 0 && A[i] <= n && A[A[i] - 1] != A[i])
                swap(A[i], A[A[i] - 1]);
        
        for(int i = 0; i < n; ++ i)
            if(A[i] != i + 1)
                return i + 1;
        
        return n + 1;
    }
};
