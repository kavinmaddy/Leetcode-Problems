class Solution {
        public int minCost(String colors, int[] neededTime) {
                int i=0;
                        int cost=0;
                                int j=1;
                                        while(j<colors.length())
                                                {
                                                            if(colors.charAt(i)==colors.charAt(j))
                                                                        {
                                                                                        if(neededTime[i]<=neededTime[j])
                                                                                                        {
                                                                                                                            cost+=neededTime[i];
                                                                                                                                                i=j;
                                                                                                                                                                    j++;
                                                                                                                                                                                    }
                                                                                                                                                                                                    else{
                                                                                                                                                                                                                        cost+=neededTime[j];
                                                                                                                                                                                                                                            j++;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                    else{
                                                                                                                                                                                                                                                                                                    i=j;
                                                                                                                                                                                                                                                                                                                    j++;
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                return cost;
                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                    }
