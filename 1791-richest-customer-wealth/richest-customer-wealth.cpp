#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
            int maxWealth = 0;
                    for(auto& customer : accounts) {
                                int sum = 0;
                                            for(int balance : customer)
                                                            sum += balance;
                                                                        maxWealth = max(maxWealth, sum);
                                                                                }
                                                                                        return maxWealth;
                                                                                            }
                                                                                            };