//https://school.programmers.co.kr/learn/courses/30/lessons/12940

#include <string>
#include <vector>

using namespace std;

int getgcd(int a, int b) {
    if (b == 0)return a;
    return getgcd(b, a % b);
}
vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.emplace_back(getgcd(n, m));
    answer.emplace_back(n / getgcd(n, m) * m);
    return answer;
}