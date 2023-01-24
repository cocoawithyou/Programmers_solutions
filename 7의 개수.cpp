//https://school.programmers.co.kr/learn/courses/30/lessons/120912

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for (auto i : array) {
        string tmp = to_string(i);
        for (auto j : tmp) {
            if (j - '0' == 7)
                answer++;
        }
    }

    return answer;
}