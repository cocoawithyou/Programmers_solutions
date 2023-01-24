//https://school.programmers.co.kr/learn/courses/30/lessons/12934

#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long a = sqrt(n);
    if (a * a == n)
        return (a + 1) * (a + 1);
    return -1;
}