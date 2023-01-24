//https://school.programmers.co.kr/learn/courses/30/lessons/120834

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

string solution(int age) {
    string answer = to_string(age);


    for (auto& v : answer)
    {
        *v += 'a' - '0';
    }

    return answer;
}