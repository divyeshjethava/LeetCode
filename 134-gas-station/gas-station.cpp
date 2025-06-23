class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0,totalCost = 0;
        int start = 0 , cGas = 0;

        for(int i = 0;i < gas.size();i++){
            totalGas += gas[i];
            totalCost += cost[i];

            cGas += gas[i] - cost[i];
            if(cGas < 0){
                start = i+1;
                cGas = 0;
            }
        }
        return (totalGas < totalCost) ? -1 : start;
    }
};