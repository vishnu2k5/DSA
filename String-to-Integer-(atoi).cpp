1#include <climits>
2class Solution {
3public:
4    int myAtoi(string s) {
5        int i = 0, n = s.size();
6
7   
8        while (i < n && s[i] == ' ') i++;
9
10
11        int sign = 1;
12        if (i < n && (s[i] == '+' || s[i] == '-')) {
13            if (s[i] == '-') sign = -1;
14            i++;
15        }
16
17        int ans = 0;
18        while (i < n && isdigit(s[i])) {
19            int digit = s[i] - '0';
20
21
22            if (ans > (INT_MAX - digit) / 10) {
23                return (sign == 1) ? INT_MAX : INT_MIN;
24            }
25
26            ans = ans * 10 + digit;
27            i++;
28        }
29
30        return sign * ans;
31    }
32};