//https://school.programmers.co.kr/learn/courses/30/lessons/120923

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int i, j, sum;
    i = j = sum = 0;
    while (i < num) {
        sum += i;
        i++;
    }
    total -= sum;
    j = total / i;
    for (int k = j; k < j + num; k++)
        answer.emplace_back(k);

    return answer;
}