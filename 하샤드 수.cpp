//https://school.programmers.co.kr/learn/courses/30/lessons/12947

#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    string tmp = to_string(x);
    int a = 0;
    for (auto i : tmp) {
        a += i - '0';
    }
    if (x % a != 0)
        answer = false;

    return answer;
}