1class Solution {
2public:
3    string convert(string s, int numRows) {
4        if (numRows == 1 || numRows >= s.size()) return s;
5        vector<string> rows(numRows);
6        int current = 0;
7        bool goingdow = false;
8        for(char c:s){
9            rows[current]+=c;
10            if(current == 0||current == numRows-1){
11                goingdow = !goingdow;
12            }
13            current += goingdow?1:-1;
14
15
16        }
17          string res;
18            for(auto r:rows){
19                res+=r;
20            }
21            return res;
22    }
23};