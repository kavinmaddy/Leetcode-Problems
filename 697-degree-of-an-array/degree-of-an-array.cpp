class Solution {
    public:
        int findShortestSubArray(vector<int>& nums) {
               if (nums.size() == 1) {
                           return 1;
                                   }

                                           unordered_map<int, int> freqMap;         // To store the frequency of each element
                                                   unordered_map<int, int> firstIndexMap;   // To store the first occurrence index of each element
                                                           unordered_map<int, int> lastIndexMap;    // To store the last occurrence index of each element

                                                                   // Fill the maps
                                                                           for (int i = 0; i < nums.size(); ++i) {
                                                                                       int num = nums[i];
                                                                                                   freqMap[num]++;
                                                                                                               if (firstIndexMap.find(num) == firstIndexMap.end()) {
                                                                                                                               firstIndexMap[num] = i;
                                                                                                                                           }
                                                                                                                                                       lastIndexMap[num] = i;
                                                                                                                                                               }

                                                                                                                                                                       int maxFreq = INT_MIN;
                                                                                                                                                                               for (const auto& entry : freqMap) {
                                                                                                                                                                                           if (entry.second > maxFreq) {
                                                                                                                                                                                                           maxFreq = entry.second;
                                                                                                                                                                                                                       }
                                                                                                                                                                                                                               }

                                                                                                                                                                                                                                       int minLength = INT_MAX;
                                                                                                                                                                                                                                               for (const auto& entry : freqMap) {
                                                                                                                                                                                                                                                           if (entry.second == maxFreq) {
                                                                                                                                                                                                                                                                           int length = lastIndexMap[entry.first] - firstIndexMap[entry.first] + 1;
                                                                                                                                                                                                                                                                                           minLength = min(minLength, length);
                                                                                                                                                                                                                                                                                                       }
                                                                                                                                                                                                                                                                                                               }

                                                                                                                                                                                                                                                                                                                       return minLength;
                                                                                                                                                                                                                                                                                                                           }
                                                                                                                                                                                                                                                                                                                               
                                                                                                                                                                                                                                                                                                                               };
