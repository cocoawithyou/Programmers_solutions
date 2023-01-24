//https://school.programmers.co.kr/learn/courses/30/lessons/120848

#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer, i;
    answer = 1;
    i = 0;
    if (n == 1) return 1;
    while (n > answer) {
        answer *= ++i;
    }
    if (n == answer)
        return i;
    else if (n < answer)
        return i - 1;

}