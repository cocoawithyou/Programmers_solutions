//https://school.programmers.co.kr/learn/courses/30/lessons/120876

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> lines) {
    sort(lines.begin(), lines.end());
    int a = lines[0][0];
    int arr[200] = { 0 };
    for (int i = 0; i < lines.size(); i++) {
        for (int j = 0; j < 2; j++) {
            lines[i][j] += -a;
        }
    }

    for (auto i : lines) {
        for (int j = i[0]; j < i[1]; j++)
            arr[j]++;
    }
    int answer = 0;
    for (auto i : arr) {
        if (i >= 2)
            answer++;
    }

    return answer;
}