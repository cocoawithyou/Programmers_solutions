//https://school.programmers.co.kr/learn/courses/30/lessons/120826

#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    for (auto i : my_string) {
        if (i == letter[0])
            continue;
        answer.push_back(i);
    }
    return answer;
}