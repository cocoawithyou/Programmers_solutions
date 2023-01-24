//https://school.programmers.co.kr/learn/courses/30/lessons/12918

#include <string>
#include <vector>
#include <cctype>

using namespace std;

bool solution(string s) {
    bool answer = false;
    bool check1 = false;
    if (s.length() == 4 || s.length() == 6)
        check1 = true;

    bool check2 = true;
    for (auto i : s) {
        if (!isdigit(i))
            check2 = false;
    }


    if (check1 && check2)
        answer = true;

    return answer;
}