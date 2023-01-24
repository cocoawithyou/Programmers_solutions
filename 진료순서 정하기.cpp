//https://school.programmers.co.kr/learn/courses/30/lessons/120835

#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer(emergency.size(), 1);
    for (int i = 0; i < emergency.size(); i++) {
        for (auto j : emergency) {
            if (emergency[i] < j)
                answer[i]++;
        }
    }
    return answer;

}