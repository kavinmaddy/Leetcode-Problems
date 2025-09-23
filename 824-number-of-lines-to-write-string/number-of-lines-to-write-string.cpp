class Solution {
    public:
        vector<int> numberOfLines(vector<int>& widths, string s) {
                int lines = 1;    // Start with one line
                        int pixels = 0;   // Width used in current line
                                int length = s.size();
                                        int i = 0;
                                                
                                                        while (i < length) {
                                                                    int width = widths[s[i] - 'a']; // Width for character s[i]
                                                                                
                                                                                            // Check if adding this character exceeds line width
                                                                                                        if ((pixels + width) > 100) {
                                                                                                                        lines++;      // Start new line
                                                                                                                                        pixels = 0;   // Reset pixels for new line
                                                                                                                                                        i--;          // Decrement i to process same character again
                                                                                                                                                                    } else {
                                                                                                                                                                                    pixels += width; // Add width to current line
                                                                                                                                                                                                }
                                                                                                                                                                                                            i++;              // Move to next character
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                            
                                                                                                                                                                                                                                    return {lines, pixels}; // Return total lines and width on last line
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                        };