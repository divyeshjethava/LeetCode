class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // int s = digits.size();
        // int num = 0;
        // for(int i = 0;i < s;i++){
        //     num = num * 10 + digits[i];
        // }
        // num = num+1;
        // vector<int> arr;
        // while(num != 0){
        //     int d = num % 10;
        //     arr.push_back(d);
        //     num /= 10;
        // }

        // reverse(arr.begin(),arr.end());

        // return arr;

        int n = digits.size();
        for(int i = n - 1; i >= 0 ; i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        digits.insert(digits.begin(),1);
        return digits;
    }
};