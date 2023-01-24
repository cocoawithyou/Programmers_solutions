//https://school.programmers.co.kr/learn/courses/30/lessons/12939

#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

string solution(string s) {
    string answer = "";
    stringstream ss;
    ss.str(s);
    int max, min, tmp;
    ss >> max;
    min = max;
    while (ss >> tmp) {
        if (tmp > max) max = tmp;
        if (tmp < min) min = tmp;
    }
    answer = to_string(min) + " " + to_string(max);
    return answer;
}