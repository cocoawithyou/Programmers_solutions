//https://school.programmers.co.kr/learn/courses/30/lessons/120854

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    for (auto i : strlist)
        answer.push_back(i.size());
    return answer;
}