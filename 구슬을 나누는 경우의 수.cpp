//https://school.programmers.co.kr/learn/courses/30/lessons/120840

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int balls, int share) {
    if (balls == share)
        return 1;

    vector<int> tmp1;
    for (int i = balls - share + 1; i <= balls; i++) {
        tmp1.emplace_back(i);
    }

    vector<int> tmp2;
    for (int i = 1; i <= share; i++) {
        tmp2.emplace_back(i);
    }

    long long answer = 1;
    while (!tmp1.empty() || !tmp2.empty()) {
        if (!tmp1.empty()) {
            answer *= tmp1.back();
            tmp1.pop_back();
        }

        if (!tmp2.empty() && answer % tmp2.back() == 0) {
            answer /= tmp2.back();
            tmp2.pop_back();
        }
    }

    return static_cast<int>(answer);
}
