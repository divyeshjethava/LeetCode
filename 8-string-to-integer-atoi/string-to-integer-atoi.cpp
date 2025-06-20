class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long ans = 0;

        while (i < s.size() && s[i] == ' ') i++;
        if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        bool leadingzero = true;
        while (i < s.size() && isdigit(s[i])) {
            if (leadingzero && s[i] == '0') {
                i++;
                continue;
            }
            leadingzero = false;
            int digit = s[i] - '0';

            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            ans = ans * 10 + digit;
            i++;
        }
        ans *= sign;
        if (ans > INT_MAX) return INT_MAX;
        if (ans < INT_MIN) return INT_MIN;

        return static_cast<int>(ans);
    }
};