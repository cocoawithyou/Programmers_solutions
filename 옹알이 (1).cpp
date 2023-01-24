//https://school.programmers.co.kr/learn/courses/30/lessons/120956

#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> nge = { "aya", "ye", "woo", "ma" };
    string c = "1";
    for (auto& i : babbling) {
        for (auto j : nge) {
            if (i.find(j) != string::npos) {
                i.replace(i.find(j), j.length(), c);
            }
        }
    }

    for (auto i : babbling) {
        bool check = true;
        for (auto j : i) {
            if (!isdigit(j))
                check = false;
        }
        if (check)
            answer++;
    }
    return answer;
}