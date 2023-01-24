//https://school.programmers.co.kr/learn/courses/30/lessons/120887

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    string tmp;
    char c_k = '0' + k;
    for (int q = i; q <= j; q++) {
        tmp = to_string(q);
        for (auto m : tmp) {
            if (m == c_k)
                answer++;
        }
    }
    return answer;
}