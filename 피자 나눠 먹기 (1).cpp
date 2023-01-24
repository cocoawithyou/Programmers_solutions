//https://school.programmers.co.kr/learn/courses/30/lessons/120814

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    answer = n % 7 == 0 ? n / 7 : n / 7 + 1;
    return answer;
}