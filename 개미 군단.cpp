//https://school.programmers.co.kr/learn/courses/30/lessons/120837

#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int hp) {
    int answer = 0;
    answer = hp / 5;
    hp %= 5;
    answer += (hp / 3 + hp % 3);
    return answer;
}