//https://school.programmers.co.kr/learn/courses/30/lessons/120882

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer(score.size(), 1);
    vector<double> tmp;
    for (auto i : score) {
        tmp.emplace_back((i[0] + i[1]) / 2.);
    }

    vector<double> tmp2(tmp);
    sort(tmp2.begin(), tmp2.end());
    for (auto i : tmp2) {
        for (int j = 0; j < tmp.size(); j++) {
            if (tmp[j] < i)
                answer[j]++;
        }
    }
    return answer;
}