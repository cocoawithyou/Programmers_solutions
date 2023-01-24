//https://school.programmers.co.kr/learn/courses/30/lessons/120809

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int j = 0;
    for (auto i : numbers)
        answer.push_back(2 * i);
    return answer;
}