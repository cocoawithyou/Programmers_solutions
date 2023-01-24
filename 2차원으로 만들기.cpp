//https://school.programmers.co.kr/learn/courses/30/lessons/120842

#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    vector<int> tmp;
    int i = 0;
    for (int k = 0; k < num_list.size() / n; k++) {
        for (int j = 0; j < n; j++) {
            tmp.emplace_back(num_list[i++]);
        }
        answer.emplace_back(tmp);
        tmp.clear();
    }
    return answer;
}