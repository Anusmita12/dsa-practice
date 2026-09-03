#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPriceSoFar = prices[0];
        int MaxProfitSoFar = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minPriceSoFar) {
                minPriceSoFar = prices[i];
            }
            else if (prices[i] - minPriceSoFar > MaxProfitSoFar) {
                MaxProfitSoFar = prices[i] - minPriceSoFar;
            }
        }

        return MaxProfitSoFar;   
    }
};

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    Solution sol;
    int result = sol.maxProfit(prices);

    cout << "Max Profit: " << result << endl;

    return 0;
}