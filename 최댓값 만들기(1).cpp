//https://school.programmers.co.kr/learn/courses/30/lessons/120847

#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(int x, int y) {
    return x > y;
}
int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.begin(), numbers.end(), cmp);
    return answer = numbers[0] * numbers[1];
}