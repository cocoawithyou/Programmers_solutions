//https://school.programmers.co.kr/learn/courses/30/lessons/120907

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int Get_element(string s) {

    int i, j;
    int sign, ans;
    sign = 1;
    i = j = ans = 0;
    while (i < s.length()) {
        if (s[i] == '-') {
            sign = -1;
        }
        else {
            if (j)
                ans *= 10;
            ans += s[i] - '0';
            j++;
        }
        i++;
    }

    return sign * ans;
}

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    string s = "";
    char sign;
    vector<int> tmp;
    for (auto i : quiz) {
        i += ' ';
        int blank = 0;
        for (auto j : i) {
            if (j == ' ') {
                if (blank % 2 == 0) {

                    tmp.emplace_back(Get_element(s));
                    s.clear();
                }
                blank++;
            }
            else {
                switch (blank)
                {
                case 0:s += j; break;
                case 1:sign = j; break;
                case 2:s += j; break;
                case 4:s += j; break;
                default:continue;
                }
            }
        }
        bool judge = true;
        switch (sign) {
        case '-': judge = tmp[0] - tmp[1] == tmp[2] ? true : false; break;
        case '+': judge = tmp[0] + tmp[1] == tmp[2] ? true : false; break;
        }
        if (judge) {
            answer.emplace_back("O");
        }
        else {
            answer.emplace_back("X");
        }
        tmp.clear();
    }
    return answer;
}