//https://school.programmers.co.kr/learn/courses/30/lessons/120851

#include <string>
#include <vector>


using namespace std;

int solution(string my_string) {
    int answer = 0;
    for (auto i : my_string) {
        if (isdigit(i) == 0)
            continue;
        answer += i - '0';
    }
    return answer;
}