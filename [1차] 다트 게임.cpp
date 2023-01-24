//https://school.programmers.co.kr/learn/courses/30/lessons/17682

#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector<int> score;
    vector<int> state;
    vector<char> opt(3, '0');
    for (int i = 0; i < dartResult.size(); i++) {
        if (isdigit(dartResult[i])) {
            if (dartResult[i] == '1') {
                if (isdigit(dartResult[i + 1])) {
                    score.emplace_back(10);
                    i++;
                }
                else {
                    score.emplace_back(1);
                }
            }
            else {
                score.emplace_back(dartResult[i] - '0');
            }

        }
        else if (isalpha(dartResult[i])) {
            if (dartResult[i] == 'S') {
                state.emplace_back(1);
            }
            else if (dartResult[i] == 'D') {
                state.emplace_back(2);
            }
            else {
                state.emplace_back(3);
            }
        }
        else {
            opt[i / 3] = dartResult[i];
        }
    }
    for (int i = 0; i < 3; i++) {
        score[i] = pow(score[i], state[i]);
        if (opt[i] == '0') {
            continue;
        }
        else if (opt[i] == '*') {
            if (i > 0) {
                score[i - 1] *= 2;
                score[i] *= 2;
            }
            else {
                score[i] *= 2;
            }
        }
        else {
            score[i] *= -1;
        }
    }
    answer = score[0] + score[1] + score[2];
    return answer;
}