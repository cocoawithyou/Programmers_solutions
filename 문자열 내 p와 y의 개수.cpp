//https://school.programmers.co.kr/learn/courses/30/lessons/12916

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int num_p, num_y;
    num_p = num_y = 0;
    for (auto i : s) {
        if (i == 'p' || i == 'P')
            num_p++;
        else if (i == 'y' || i == 'Y')
            num_y++;
    }
    if (num_p != num_y)
        answer = false;

    return answer;
}