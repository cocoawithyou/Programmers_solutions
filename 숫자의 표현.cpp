//https://school.programmers.co.kr/learn/courses/30/lessons/12924

#include <string>
#include <vector>

using namespace std;
bool GGYU(int n, int i) {
    do { n -= i++; } while (n > 0);
    if (n == 0)
        return true;
    return false;
}

int solution(int n) {
    int answer = 0;
    int i = 1;
    while (i <= n) {
        if (GGYU(n, i++))
            answer++;
    }
    return answer;
}