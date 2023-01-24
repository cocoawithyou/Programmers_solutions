//https://school.programmers.co.kr/learn/courses/30/lessons/120875

#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> dots) {
    double answer, tmp;
    tmp = 0;
    bool check = false;
    vector<double> t;

    for (int i = 0; i < dots.size() - 1; i++) {
        for (int j = i + 1; j < dots.size(); j++) {
            tmp = static_cast<double>(dots[i][1] - dots[j][1]) / (dots[i][0] - dots[j][0]);
            t.emplace_back(tmp);
        }
    }

    for (int i = 0; i < t.size() - 1; i++) {
        for (int j = i + 1; j < t.size(); j++) {
            if (t[i] == t[j])
                check = true;
        }
    }

    if (check)
        return 1;
    return 0;
}