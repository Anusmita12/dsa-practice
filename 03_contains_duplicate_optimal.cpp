#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int i = 0; i < nums.size(); i++) {
            if (seen.find(nums[i]) != seen.end()) {
                return true;
            }
            seen.insert(nums[i]);
        }

        return false;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 1};

    Solution sol;
    bool result = sol.containsDuplicate(nums);

    cout << (result ? "true" : "false") << endl;

    return 0;
}