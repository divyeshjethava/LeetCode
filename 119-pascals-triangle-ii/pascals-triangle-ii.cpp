class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> arr;
        long long val = 1;
        for(int j = 0;j <= rowIndex;j++){
          arr.push_back(val);
          val = val * (rowIndex - j) / (j + 1);
          
        }
        return arr;
    }
};