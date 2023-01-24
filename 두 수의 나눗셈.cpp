//https://school.programmers.co.kr/learn/courses/30/lessons/120806
#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    double tmp = static_cast<double>(num1) / num2 * 1000;
    answer = static_cast<int>(tmp);
    return answer;
}