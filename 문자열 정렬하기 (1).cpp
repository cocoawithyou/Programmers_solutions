//https://school.programmers.co.kr/learn/courses/30/lessons/120850

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for (auto i : my_string)
        if (isdigit(i))
            answer.emplace_back(i - '0');
    sort(answer.begin(), answer.end());
    return answer;
}