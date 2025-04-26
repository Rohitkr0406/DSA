class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0;
        int defecit = 0;
        int balance = 0;
        int size = gas.size();

        for (int i = 0; i < size; i++) {
            balance += gas[i] - cost[i];
            if (balance < 0) {
                defecit += balance;
                start = i + 1;
                balance = 0;
            }
        }

        if (defecit + balance >= 0)
            return start;
        else
            return -1;
    }
};