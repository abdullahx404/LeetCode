1#include <climits>
2
3class Solution {
4public:
5    int reverse(int x) {
6        int reversed_num = 0;
7        
8        while (x != 0) {
9            int digit = x % 10;
10            x /= 10;
11            
12            if (reversed_num > INT_MAX / 10 || (reversed_num == INT_MAX / 10 && digit > 7)) {
13                return 0;
14            }
15            if (reversed_num < INT_MIN / 10 || (reversed_num == INT_MIN / 10 && digit < -8)) {
16                return 0;
17            }
18            
19            reversed_num = reversed_num * 10 + digit;
20        }
21        
22        return reversed_num;
23    }
24};