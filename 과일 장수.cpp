//https://school.programmers.co.kr/learn/courses/30/lessons/135808

#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(int a, int b) {
    return a > b;
}

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.begin(), score.end(), cmp);
    int num = score.size();
    int i = 1;
    while (num >= m) {
        answer += score[m * i - 1] * m;
        num -= m;
        i++;
    }
    return answer;
}
