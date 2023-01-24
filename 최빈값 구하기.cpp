//https://school.programmers.co.kr/learn/courses/30/lessons/120812

#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

#define pp pair<int,int>

using namespace std;

bool cmp(const pp& a, const pp& b) {
    if (a.second == b.second) return a.first > b.first;
    return a.second > b.second;
}

int solution(vector<int> array) {
    if (array.size() == 1)
        return array[0];
    map<int, int> m;
    for (auto i : array) {
        if (m.find(i) == m.end())
            m.insert(make_pair(i, 1));
        else
            m[i]++;
    }

    vector<pp> v(m.begin(), m.end());
    sort(v.begin(), v.end(), cmp);

    if (v[0].second == v[1].second)
        return -1;
    else
        return v[0].first;
}