class Solution {
    public:
        int minTimeToType(string word) {
                int answer=0;
                        char pointer='a';
                                for(int i=0;i<word.length();i++){
                                            int clockwise = abs(word[i] - pointer);
                                                        int counterclockwise = 26 - clockwise;
                                                                    answer += min(clockwise, counterclockwise) + 1; 
                                                                                pointer = word[i];
                                                                                        }
                                                                                                return answer;
                                                                                                    }
                                                                                                    };
