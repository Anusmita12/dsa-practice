#include <vector>
#include <iostream>
using namespace std;
class Solution{
    public:
    int maxSubarray(vector<int>& nums){
        int cur = nums[0];
        int best = nums[0];
        for(int i = 1;i < nums.size();i++)
        {
            cur = max(nums[i],cur+nums[i]);
            best = max(best,cur);
        }
        return best;
    }
};