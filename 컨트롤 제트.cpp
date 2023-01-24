//https://school.programmers.co.kr/learn/courses/30/lessons/120853

#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

int solution(string s) {
    string tmp;
    int answer = 0;
    int last = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (!tmp.empty()) {
                answer += stoi(tmp);
                last = stoi(tmp);
                tmp.clear();
            }
            else
                continue;
        }
        else if (s[i] == 'Z') {
            answer -= last;
        }
        else {
            tmp += s[i];
        }
    }
    if (!tmp.empty())
        answer += stoi(tmp);

    return answer;
}