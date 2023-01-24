//https://school.programmers.co.kr/learn/courses/30/lessons/12951

#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

string solution(string s) {
    string answer = "";
    bool check = true;
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            if (check) {
                check = false;
                answer.append(1, toupper(s[i]));
            }
            else {
                answer.append(1, tolower(s[i]));
            }
        }
        else {
            if (s[i] == ' ') {
                check = true;
            }
            else {
                check = false;
            }
            answer.append(1, s[i]);
        }

    }
    return answer;
}