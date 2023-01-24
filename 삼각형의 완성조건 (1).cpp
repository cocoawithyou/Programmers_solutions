//https://school.programmers.co.kr/learn/courses/30/lessons/120889

#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int big = sides[0];
    for (auto i : sides)
        big = max(big, i);
    answer = accumulate(sides.begin(), sides.end(), 0) - big;
    return answer > big ? 1 : 2;
}