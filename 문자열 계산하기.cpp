//https://school.programmers.co.kr/learn/courses/30/lessons/120902

#include <string>
#include <vector>
#include <sstream>
#include <queue>
#include <iostream>

using namespace std;

int solution(string my_string) {
    stringstream ss;
    ss.str(my_string);
    string tmp;
    queue<string> qs;
    queue<string> qi;
    bool check = true;
    while (ss >> tmp) {
        if (check) {
            qi.push(tmp);
            check = false;
        }
        else {
            qs.push(tmp);
            check = true;
        }
    }

    int answer = stoi(qi.front());
    qi.pop();

    while (!qi.empty()) {
        if (qs.front() == "+") {
            answer += stoi(qi.front());
            qi.pop();
        }
        else {
            answer -= stoi(qi.front());
            qi.pop();
        }
        qs.pop();
    }

    return answer;
}