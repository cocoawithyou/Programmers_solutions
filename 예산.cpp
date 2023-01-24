//https://school.programmers.co.kr/learn/courses/30/lessons/12982

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(), d.end());
    while (budget > 0 && answer < d.size()) {
        budget -= d[answer++];
    }
    if (budget < 0)
        answer--;
    return answer;
}