//https://school.programmers.co.kr/learn/courses/30/lessons/12977

#include <vector>
#include <iostream>
#include <cmath>
using namespace std;
bool IsPrime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

int solution(vector<int> number) {
    int answer = 0;
    for (int i = 0; i < number.size() - 2; i++) {
        for (int j = i + 1; j < number.size() - 1; j++) {
            for (int k = j + 1; k < number.size(); k++) {
                if (IsPrime(number[i] + number[j] + number[k]))
                    answer++;
            }

        }
    }
    return answer;
}