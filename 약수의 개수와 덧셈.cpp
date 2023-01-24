//https://school.programmers.co.kr/learn/courses/30/lessons/77884

#include <string>
#include <vector>

using namespace std;
int yaksu(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }
    return count;
}

int solution(int left, int right) {
    int answer = 0;
    for (int i = left; i <= right; i++) {
        if (yaksu(i) % 2 == 0)
            answer += i;
        else
            answer -= i;
    }
    return answer;
}