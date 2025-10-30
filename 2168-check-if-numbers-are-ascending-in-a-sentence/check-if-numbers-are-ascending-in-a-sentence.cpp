class Solution {
    public:
        bool areNumbersAscending(string s) {
                string temp = "";
                        int prev = INT_MIN;
                                for(auto x : s){
                                            if(isdigit(x))
                                                        temp += x;
                                                                    else if(temp.size() > 0){
                                                                                    if(prev >= stoi(temp))
                                                                                                    return false;
                                                                                                                    prev = stoi(temp);
                                                                                                                                    temp = "";
                                                                                                                                                }
                                                                                                                                                        }

                                                                                                                                                                if(temp.size()>0 && prev >= stoi(temp))
                                                                                                                                                                        return false;

                                                                                                                                                                                return true;
                                                                                                                                                                                    }
                                                                                                                                                                                    };
