//https://school.programmers.co.kr/learn/courses/30/lessons/120824

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = { 0,0 };
    for (auto i : num_list)
        i % 2 == 0 ? answer[0]++ : answer[1]++;
    return answer;
}