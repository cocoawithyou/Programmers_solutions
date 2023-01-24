//https://school.programmers.co.kr/learn/courses/30/lessons/42842

#include <string>
#include <vector>
#include <cmath>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int tmp = brown + yellow;
    for (int i = sqrt(tmp); i >= 1; i--) {
        if (tmp % i == 0 && (i - 2) * (tmp / i - 2) == yellow) {
            answer.emplace_back(tmp / i);
            answer.emplace_back(i);
            return answer;
        }
    }
}