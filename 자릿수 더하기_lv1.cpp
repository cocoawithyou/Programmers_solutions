//https://school.programmers.co.kr/learn/courses/30/lessons/12931

#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
    int answer = 0;
    string tmp = to_string(n);
    for (auto i : tmp) {
        answer += i - '0';
    }
    return answer;
}