//https://school.programmers.co.kr/learn/courses/30/lessons/120811

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    sort(array.begin(), array.end());
    int center = array.size() / 2;
    answer = array[center];
    return answer;
}