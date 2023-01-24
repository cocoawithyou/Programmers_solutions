//https://school.programmers.co.kr/learn/courses/30/lessons/120815

#include <string>
#include <vector>

using namespace std;
int getgcd(int a, int b) {
    if (b == 0) return a;
    return getgcd(b, a % b);
}
int solution(int n) {
    int answer = 0;
    answer = n / getgcd(n, 6);
    return answer;
}