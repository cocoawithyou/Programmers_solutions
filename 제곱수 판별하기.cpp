//https://school.programmers.co.kr/learn/courses/30/lessons/120909

#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    double i = sqrt(n);
    return pow(static_cast<int>(i), 2) == n ? 1 : 2;
}