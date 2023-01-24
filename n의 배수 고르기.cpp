//https://school.programmers.co.kr/learn/courses/30/lessons/120905

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;
    for (auto i : numlist)
        if (i % n == 0)
            answer.emplace_back(i);
    return answer;
}