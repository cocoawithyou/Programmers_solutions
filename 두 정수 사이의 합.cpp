//https://school.programmers.co.kr/learn/courses/30/lessons/12912

#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if (a == b)
        return a;

    int big = a > b ? a : b;
    int small = a < b ? a : b;
    for (int i = small; i <= big; i++) {
        answer += i;
    }
    return answer;
}