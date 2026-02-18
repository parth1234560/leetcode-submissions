class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        long long result = 0;
        int sign = 1;

        // skip spaces
        while(i < n && s[i] == ' ') i++;

        // sign
        if(i < n && (s[i] == '+' || s[i] == '-')) {
            if(s[i] == '-') sign = -1;
            i++;
        }

        // digits
        while(i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            // overflow check
            if(result > (INT_MAX - digit) / 10)
                return sign == 1 ? INT_MAX : INT_MIN;

            result = result * 10 + digit;
            i++;
        }

        return sign * result;
    }
};

