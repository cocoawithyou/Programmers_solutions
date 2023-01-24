//https://school.programmers.co.kr/learn/courses/30/lessons/120808

#include <string>
#include <vector>
#include <iostream>
using namespace std;
int GetGCD(int a, int b) {
    while (a % b != 0) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return b;
}

vector<int> solution(int denum1, int num1, int denum2, int num2) {
    vector<int> answer;
    answer.emplace_back(denum1 * num2 + denum2 * num1);
    answer.emplace_back(num1 * num2);

    int gcd = GetGCD(answer[0], answer[1]);
    answer[0] /= gcd;
    answer[1] /= gcd;

    return answer;
}