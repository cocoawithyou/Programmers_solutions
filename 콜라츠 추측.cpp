//https://school.programmers.co.kr/learn/courses/30/lessons/12943

#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long tmp = static_cast<long long>(num);
    while (tmp > 1) {
        if (tmp % 2 == 0)
            tmp /= 2;
        else {
            tmp *= 3;
            tmp++;
        }
        answer++;
        if (answer > 499)
            return -1;
    }
    return answer;
}