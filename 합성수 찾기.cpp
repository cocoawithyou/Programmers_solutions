//https://school.programmers.co.kr/learn/courses/30/lessons/120846

#include <string>
#include <vector>
int hap(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
        if (count == 3)
            return 1;
    }
    return 0;
}
using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n; i++) {
        if (hap(i))
            answer++;
    }
    return answer;
}