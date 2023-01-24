//https://school.programmers.co.kr/learn/courses/30/lessons/12903

#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int o_s = s.size();
    if (o_s % 2 == 0) {
        answer += s.substr((o_s / 2 - 1), 2);
        cout << answer << endl;
    }
    else {
        answer += s.substr((o_s / 2), 1);
        cout << answer << endl;
    }
    return answer;
}