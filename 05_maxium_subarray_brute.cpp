#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
        int maxSubarray(vector<int>& nums){
            int best = INT_MIN;
            for(int i = 0; i<nums.size();i++){
                int sum = nums[0];
                for(int j = i;j<nums.size();j++){
                sum += nums[j];
                best = max(best,sum);
            }
            }
            return best;
        }
    };