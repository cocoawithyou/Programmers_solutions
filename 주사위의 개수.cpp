//https://school.programmers.co.kr/learn/courses/30/lessons/120845

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = 1;
    for (auto i : box)
        answer *= i / n;
    return answer;

}