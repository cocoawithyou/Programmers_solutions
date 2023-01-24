//https://school.programmers.co.kr/learn/courses/30/lessons/42889

#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;
bool cmp(pair<int, double>& a, pair<int, double>& b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> tmp(N, 0);
    map<int, double, greater<double>> m;

    for (auto i : stages) {
        tmp[i - 1]++;
    }
    double next = static_cast<double>(stages.size());
    for (int i = 0; i < tmp.size(); i++) {
        if (tmp[i] > 0) {
            m[i + 1] = tmp[i] / next;
        }
        else {
            m[i + 1] = 0;
        }

        next -= tmp[i];
    }
    vector<pair<int, double>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), cmp);

    vector<int>answer;
    for (auto i : v) {
        cout << i.first << " " << i.second << endl;
        answer.emplace_back(i.first);
    }
    return answer;
}