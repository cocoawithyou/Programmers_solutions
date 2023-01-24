//https://school.programmers.co.kr/learn/courses/30/lessons/120886

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string before, string after) {
    int answer = 0;
    sort(before.begin(), before.end());
    sort(after.begin(), after.end());
    if (before.compare(after) == 0)
        return 1;
    else
        return 0;
}