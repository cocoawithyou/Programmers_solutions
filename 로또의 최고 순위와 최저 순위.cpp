//https://school.programmers.co.kr/learn/courses/30/lessons/77484

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int same, zero;
    same = zero = 0;
    for (auto i : lottos) {
        if (i == 0) {
            zero++;
        }
        else if (find(win_nums.begin(), win_nums.end(), i) != win_nums.end()) {
            same++;
        }
    }
    if (zero == 6) {
        answer.emplace_back(1);
        answer.emplace_back(6);
    }
    else if (same == 0 && zero == 0) {
        answer.emplace_back(6);
        answer.emplace_back(6);
    }
    else {
        answer.emplace_back(7 - (same + zero));
        answer.emplace_back(7 - same);
    }
    return answer;
}