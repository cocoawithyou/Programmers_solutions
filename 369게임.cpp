//https://school.programmers.co.kr/learn/courses/30/lessons/120891

#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int order) {
    int answer = 0;
    string tmp = to_string(order);
    for (auto i : tmp) {
        if (i != '0' && (i - '0') % 3 == 0)
            answer++;
    }
    return answer;
}