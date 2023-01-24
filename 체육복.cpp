//https://school.programmers.co.kr/learn/courses/30/lessons/42862

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> all(n, 1);
    for (auto i : reserve) {
        all[i - 1]++;
    }
    for (auto i : lost) {
        all[i - 1]--;
    }
    int i, front, back;
    i = 0; front = -1; back = 1;
    for (int i = 0; i < all.size(); i++) {
        if (i == 0) {
            front = i;
            back = i + 1;
        }
        else if (i == all.size() - 1) {
            front = i - 1;
            back = i;
        }
        else {
            front = i - 1;
            back = i + 1;
        }

        if (all[i] == 0) {
            if (all[front] == 2) {
                all[front]--;
                all[i] = 1;
            }
            else if (all[back] == 2) {
                all[back]--;
                all[i] = 1;
            }
        }
    }
    for (auto i : all) {
        if (i > 0)
            answer++;
    }
    return answer;
}