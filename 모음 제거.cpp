//https://school.programmers.co.kr/learn/courses/30/lessons/120849

#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string my_string) {
    string moum = "aeiou";
    string answer = "";
    for (auto i : my_string) {
        if (moum.find(i) == string::npos) {
            answer += i;
        }
    }
    return answer;
}