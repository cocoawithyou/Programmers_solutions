//https://school.programmers.co.kr/learn/courses/30/lessons/86051

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -1;
    int j = 45;
    for (auto i : numbers) {
        j -= i;
    }
    return j;
}