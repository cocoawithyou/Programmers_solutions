//https://school.programmers.co.kr/learn/courses/30/lessons/120924

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    bool check;
    if (common[0] - common[1] == 0 || (common[0] - common[1] == common[1] - common[2])) {
        check = true;
    }
    else {
        check = false;
    }
    if (check)
        return common.back() + (common[1] - common[0]);
    else
        return common.back() * (common[1] / common[0]);
    return answer;
}