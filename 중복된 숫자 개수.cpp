//https://school.programmers.co.kr/learn/courses/30/lessons/120583

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    int answer = count(begin(array), end(array), n);
    return answer;
}