//https://school.programmers.co.kr/learn/courses/30/lessons/12911

#include <string>
#include <vector>

using namespace std;
int ilmeggego(int n) {
    int count = 0;
    while (n > 0) {
        if (n % 2 == 1)
            count++;
        n = n >> 1;
    }
    return count;
}

int solution(int n) {
    int answer = 0;
    bool check = true;
    answer = n;
    while (ilmeggego(n) != ilmeggego(++answer)) {}
    return answer;
}