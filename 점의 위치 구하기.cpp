//https://school.programmers.co.kr/learn/courses/30/lessons/120841

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    int answer = dot[1] > 0 ? 2 - (dot[0] > 0) : 3 + (dot[0] > 0);
    return answer;
}