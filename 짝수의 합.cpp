//https://school.programmers.co.kr/learn/courses/30/lessons/120831
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n; i++)
        if (i % 2 == 0)
            answer += i;
    return answer;
}