//https://school.programmers.co.kr/learn/courses/30/lessons/12944

#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    for (auto i : arr) {
        answer += i;
    }
    answer /= arr.size();
    return answer;
}