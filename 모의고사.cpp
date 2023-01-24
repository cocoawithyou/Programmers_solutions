//https://school.programmers.co.kr/learn/courses/30/lessons/42840

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer(3, 0);
    vector<int> one = { 1, 2, 3, 4, 5 };
    vector<int> two = { 2, 1, 2, 3, 2, 4, 2, 5 };
    vector<int> three = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
    int j1 = 0;
    int j2 = 0;
    int j3 = 0;
    for (auto i : answers) {
        if (i == one[j1]) {
            answer[0]++;
        }
        if (i == two[j2]) {
            answer[1]++;
        }
        if (i == three[j3]) {
            answer[2]++;
        }
        j1++; j2++; j3++;
        if (j1 > one.size() - 1)
            j1 = 0;
        if (j2 > two.size() - 1)
            j2 = 0;
        if (j3 > three.size() - 1)
            j3 = 0;
    }
    auto it = max_element(answer.begin(), answer.end());
    vector<int> answer2;
    int j = 1;
    for (auto i : answer) {
        if (i == *it) {
            answer2.emplace_back(j);
        }
        j++;
    }

    return answer2;
}