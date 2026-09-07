#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        return helper(nums, 0, nums.size() - 1);
    }

private:
    int helper(vector<int>& nums, int left, int right) {
        
        if (left == right) {
            return nums[left];
        }

        int mid = left + (right - left) / 2;

        
        int leftBest = helper(nums, left, mid);
        int rightBest = helper(nums, mid + 1, right);

        
        int crossBest = maxCrossingSum(nums, left, mid, right);

        return max({leftBest, rightBest, crossBest});
    }

    int maxCrossingSum(vector<int>& nums, int left, int mid, int right) {
        
        int leftSum = INT_MIN;
        int sum = 0;
        for (int i = mid; i >= left; i--) {
            sum += nums[i];
            leftSum = max(leftSum, sum);
        }

        
        int rightSum = INT_MIN;
        sum = 0;
        for (int i = mid + 1; i <= right; i++) {
            sum += nums[i];
            rightSum = max(rightSum, sum);
        }

        
        return leftSum + rightSum;
    }
};