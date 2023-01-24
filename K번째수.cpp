//https://school.programmers.co.kr/learn/courses/30/lessons/42748

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for (auto k : commands) {
        vector<int> tmp;
        for (int i = k[0] - 1; i <= k[1] - 1; i++) {
            tmp.emplace_back(array[i]);
        }
        sort(tmp.begin(), tmp.end());
        answer.emplace_back(tmp[k[2] - 1]);
        tmp.clear();
    }

    return answer;
}